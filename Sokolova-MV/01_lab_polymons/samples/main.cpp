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


int main() {
	setlocale(LC_ALL, "Russian");
	TList<int> list;
	THeadList<int> headList;
	TMonom mon;
	TPolinom p1, p2, p3;
	int  entry = 1,  entry3 = 0, f = 0, i;
	double c;


	while (entry != 0)
	{

		system("cls");
		cout << "\t\t\t\t\t\t\t�������� ��� ����������\n";
		menu();
		cin >> entry;
		fflush(stdin);
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
			cout << "\n\t\t\t\t\t\t���� ������� ���������.\n" << "\t\t\t\t\t";
			cin >> p1;
			if ((entry != 5) && (entry != 3)) { cout << "\n\t\t\t\t\t\t���� ������� ���������.\n" << "\t\t\t\t\t"; cin >> p2; }
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
			case 2: cout << "\t\t\t\t\t\t2.  " << p2 << "\n\t\t\t\t�������� ���������: ";   /**/ p3 = p1 - p2; if (p1 == p2) p3=p3+m; cout << p3;
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
	return 0;
}

