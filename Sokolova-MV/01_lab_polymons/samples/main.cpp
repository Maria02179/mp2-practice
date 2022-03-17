#include<iostream>
#include<locale>
#include "List.h"
#include "HeadList.h"
#include "Monom.h"
#include "Polinom.h"

using namespace std;

void menu()
{
	cout << "\n\t\t\t\t\t\t1. ������� ��� ����������\n\t\t\t\t\t\t2. ������� ������ ��������� �� �������\n\t\t\t\t\t\t3. �������� ��������� �� ���������\n\t\t\t\t\t\t4. ����������� ��� ����������\n\t\t\t\t\t\t5. ��������� ���������\n\t\t\t\t\t\t0. �����\n\n\t\t\t\t\t\t����: ";
}


void main() {
	setlocale(LC_ALL, "Russian");
	TList<int> list;
	THeadList<int> headList;
	TMonom mon;
	TPolinom p[20];
	TPolinom p1, p2, p3;
	int  entry = 1, entry2 = 0, entry3 = 0, f = 0, i;
	double c;


	while (entry != 0)
	{

		system("cls");
		cout << "\t\t\t\t\t\t\t�������� ��� ����������\n";
		menu();
		entry = 5;
		cin >> entry;
		int o = 0;
		while (((entry < 0) || (entry > 5)) && (o < 5))
		{
			cout << "\t\t\t\t\t\t\t������� �� 0 �� 5\n\n\t\t\t\t\t\t����: ";
			cin >> entry;
			o++;
		}
		if (o == 5) { cout << "\t\t\t\t\t\t\t������, ����� "; entry = 0; }
		if (entry != 0)
		{
			system("cls");
			cout << "\n\t\t\t\t\t���� ���������� ��� ���������� ���������";
			if (f >= 2)
			{
				cout << "\n\t\t\t\t\t\t1. ������ ����� �������\n\t\t\t\t\t\t2. ������������ ���������� �������\n\n\t\t\t\t\t\t����: ";
				cin >> entry2;
			}
			if ((f < 2) || (entry2 == 1))
			{
				cout << "\n\t\t\t\t\t\t���� ������� ���������.\n" << "\t\t\t\t\t";
				cin >> p1;
				if ((entry != 5) && (entry != 3)) { cout << "\n\t\t\t\t\t\t���� ������� ���������.\n" << "\t\t\t\t\t"; cin >> p2; }
			}
			else
			{
				i = 0; system("cls");
				cout << "\n\t\t\t\t\t\t���������� ��������:\n";
				while (i < f)
				{
					cout << "\t\t\t\t\t\t" << i + 1 << ".\t" << p[i] << endl; i++;
				}
				cout << "\n\t\t\t\t\t\t������� ���������� ����� ��������\n\t\t\t\t\t\t\t����: ";
				int q = 0, w = 0;
				if ((entry == 5) || (entry == 3)) { cin >> q; }
				else {
					cin >> q;
					cout << "\n\t\t\t\t\t\t1. ������ ����� �������\n\t\t\t\t\t\t2. ������������ ���������� �������\n\n\t\t\t\t\t\t����: ";
					cin >> entry3;
					if (entry3 == 2)
					{
						cout << "\n\t\t\t\t\t\t������� ���������� ����� ��������\n\t\t\t\t\t\t\t����: ";
						cin >> w;
						p1 = p[q];
						p2 = p[w];
					}
					else
					{
						cout << "\n\t\t\t\t\t\t���� ������� ���������.\n" << "\t\t\t\t\t";
						cin >> p1;
					}
				}
			}
			if (entry != 5)
			{
				system("cls");
				cout << "\n\t\t\t\t\t\t\t �� �����:\n\n\t\t\t\t\t\t1.  " << p1;
			}
			TMonom m;
			switch (entry)
			{
			case 1: cout << "\t\t\t\t\t\t2.  " << p2 << "\n\t\t\t\t����� ���� ���������: "; p3 = p1 + p2; cout << p3;
				break;
			case 2: cout << "\t\t\t\t\t\t2.  " << p2 << "\n\t\t\t\t�������� ���������: "; ;  /**/ p3 = p1 - p2; if (p1 == p2) p3.addMonom(m); cout << p3;
				break;
			case 3: cout << "\n\t\t\t\t\t\t\t������� ���������\n\t\t\t\t\t\t\t����: ";
				cin >> c;
				cout << "\n\t\t\t\t���������� �������� �� ���������: ";  p3 = p1 * c; cout << p3;
				break;
			case 4: cout << "\n\t\t\t\t\t\t2.  " << p2 << "\n\t\t\t\t������������ ���������: "; p3 = p1 * p2; cout << p3;
				break;
			case 5: cout << "\n\t\t\t\t\t\t�����:" << p1;
				break;
			}
			cout << "\n\t\t\t\t\t\t1. ����� � ����\n\t\t\t\t\t\t0. ����� �� ���������\n\t\t\t\t\t\t����: ";
			cin >> entry;
			int o = 0;
			while (((entry < 0) || (entry > 1)) &&
				(o < 5))
			{
				cout << "\t\t\t\t\t\t\t������� ���� 1, ���� 0\n\n\t\t\t\t\t\t����: ";
				cin >> entry;
				o++;
			}
			if ((entry != 0) && (o == 5)) { cout << "\t\t\t\t\t\t\t������, ����� "; entry = 0; }
		}
	}
}/*
		/**/
		/*if (entry != 0)
		{
			system("cls");
			cout << "\n\t\t���� ���������� ��� ���������� ���������";
			if (f >= 2)
			{
				cout << "\n\t1. ������ ����� ���������\n\t2. ������������ ���������� ���������\n\n\t�����: ";
				cin >> entry2;
			}
			if ((f < 2) || (entry2 == 1))
			{
				cout << "\n\t\t���� ������� ���������.\n";
				cin >> p1;
				if ((entry != 5) && (entry != 3)) { cout << "\n\n\t\t���� ������� ���������.\n"; cin >> p2; }
			}
			else
			{
				i = 0; system("cls");
				cout << "\n\t���������� ��������:\n";
				while (i < f)
				{
					cout << "\t F" << i << "\t" << P[i] << endl; i++;
				}
				cout << "\n\t������� ���������� ����� ��������\n\t�����: ";
				int q = 0, w = 0;
				if ((entry == 5) || (entry == 3)) { cin >> q; }
				else { cin >> q >> w; }
				p1 = P[q];
				p2 = P[w];
			}
			system("cls");
			cout << "\n\t\t ����:\n\tF1 - " << p1; //������� ��� ����������\n\t2. ������� ��� ����������\n\t3. �������� ��������� �� ���������\n\t4. ����������� ��� ����������\n\t5. ��������� ���������\n\t0. �����\n\n\tInput
			switch (entry)
			{
			case 1: cout << "\n\tF2 - " << p2 << "\n\tAdd two polynomials: "; p3 = p1 + p2; cout << p3;
				break;
			case 2: cout << "\n\tF2 - " << p2 << "\n\tSubtract two polynomials: ";  p3 = p1 - p2; cout << p3;
				break;
			case 3: cout << "\n\tEnter a constant\n\tInput: ";
				cin >> c;
				cout << "\n\tMultiply a polynomial by a constant: ";  p3 = p1 * c; cout << p3;
				break;
			case 4: cout << "\n\tF2 - " << p2 << "\n\t4. Multiply two polynomials: "; p3 = p1 * p2; cout << p3;
				break;
			case 5: cout << "\n\tCalculate the polynomial:" << p1.�alculate() << "\n\tTo continue, enter any character: ";
				char e; cin >> e;
				break;
			}
			cout << "\n\n\tDo you want to save polynomials?\n\t1. Yes\n\t2. No\n\tInput: ";
			cin >> entry2;
			if (entry2 == 1)
			{
				if (entry == 5) { P[f] = p1; f = f + 1; }
				else
				{
					if (entry == 3) { P[f] = p1; P[f + 1] = p3; f = f + 2; }
					else { P[f] = p1; P[f + 1] = p2; P[f + 2] = p3;  f = f + 3; }
				}
			}
		}/**/


		/*
		for (int i = 0; i < 3; i++) {
			//list.insFirst(i);
			cin >> mon;
			p.addMonom(mon);
			//headList.insFirst(i);
		}
		for (int i = 1; i < 3; i++) {
			//list.insFirst(i);
			//cin >> mon;
			//polinom2.addMonom(mon);
			//headList.insFirst(i);
		}
		//TList<int> listCopy(list);
		//for (int i = 0; i < 3; i++)
		//{
			//list.goNext();
		//}

		//for (int i = 0;  i < 6; i++){
			//list.insLast(i);
			//headList.insLast(i);
		//}

		//list.goNext();
		//headList.goNext();

		//list.goNext();
		//headList.goNext();
		//for (int i = 0; i < 3; i++)
		//{
		//	list.insCurrent(8);
			//headList.insCurrent(8);
		//}
		//cout << list;
		//cout << headList;
		//list.goNext();
		//headList.goNext();
		//headList.goNext();
		//for (int i = 0; i < 3; i++) {
			//list.delCurr();
			//headList.delCurr();
		//}
		//list.insCurrent(11);
		//list.RemoveFirst();
		//list.RemoveFirst();
		TPolinom res;
		TMonom monom(2, 2);
		cout << p;
		res = p * 2;
		//res = res + polinom2;
		cout << res;
		//cout << list;
		//cout << headList;/**/

