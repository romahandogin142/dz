#include <stdio.h>
#include "stdlib.h"
#include "time.h"
#include "iostream"
#include "conio.h"
#include "ctime"

using namespace std;

void main()
{
#define sizeArr 15
#define sizeArra 10
#define sizeArraa 10
	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "To exit, press enter'" << endl;
		cout << "Vedite nomer zadaniya : ";
		cin >> tm;
		switch (tm)
		{
		case 1:

		{
			/*1.	������������ ������ � ���������� ����� ������������ �����.
			�������� ���������, ������� ����������, �������� �� ��������� ����� �
			���������� (���������� ��������� ������������ �����, � �������� ����� ������
			3 ���� ����� ����� ������ ���� ����).
			���� ������������ ���� �� ������������ ����� � ��������� �� ������.*/
			int number;

			printf("Enter the number: ");
			scanf("%d", &number);

			if (number >= 100000 && number <= 999999)
			{
				int buffnum = number, sum[2] = { 0 };
				for (int k = 0; k < 2; k++)
					for (int i = 0; i < 3; i++)
					{
						sum[k] += (buffnum % 10);
						buffnum /= 10;
					}
				if (sum[0] == sum[1]) printf("Number is happy");
				else printf("Number is not happy");
			}
			else printf("Error: number must contain 6 digits");

		}break;

		case 2:
		{
			/*2.	������������ ������ �������������� �����. ���������� �������� � ���� ����� 1 � 2 �����,
			� ����� 3 � 4 �����.  ���� ������������ ������ �� �������������� ����� � ������� ��������� �� ������.*/
			int num;

			printf("Enter the number: ");
			scanf("%d", &num);

			if (num >= 1000 && num <= 9999)
			{
				int buffnum = 0;
				buffnum += (num % 10) * 10;
				buffnum += (num / 10 % 10);
				buffnum += (num / 100 % 10) * 1000;
				buffnum += (num / 1000) * 100;
				printf("%s%d", "Result number is: ", buffnum);
			}
			else printf("Error: number must contain 4 digits");
		}break;

		case 3:
		{
			/*3.	�������� ��������� ���������� 200$ + ������� �� ������. ������� �� 500$ -
			3%, �� 500 �� 1000 � 5%, ����� 1000 � 8%. ������������ ������ � ���������� �������
			������ ��� ���� ����������. ���������� �� ��������,
			���������� ������� ���������, ��������� ��� ������ 200$, ������� ����� �� �����.*/
			int	a, b, c;

			cout << "������� ������� ������ ��� ���� ���������� =\n";
			cin >> a >> b >> c;

			if (a < 500)
				a = 0.03 * a + 200;
			else
				if (a > 500 && a < 1000)
					a = 0.05 * a + 200;
				else
					if (a > 1000)
						a = 0.08 * a + 200;



			if (b < 500)
				b = 0.03 * b + 200;
			else
				if (b > 500 && b < 1000)
					b = 0.05 * b + 200;
				else
					if (b > 1000)
						b = 0.08 * b + 200;


			if (c < 500)
				c = 0.03 * c + 200;
			else
				if (c > 500 && c < 1000)
					c = 0.05 * c + 200;
				else
					if (c > 1000)
						c = 0.08 * c + 200;

			if (a > b && a > c)
				a = a + 200;
			else
				if (b > c)
					b = b + 200;
				else
					c = c + 200;

			cout << "�� 1 ���������:" << a << "$" << endl;
			cout << "�� 2 ���������:" << b << "$" << endl;
			cout << "�� 3 ���������:" << c << "$" << endl;

		}break;

		case 4:
		{
			/*4.	���� �������� ������������� � �������� 50$ �� ������ 100 ����� ����.
			�� ������ ������ ��������� ���� �������� �� 20$. ����������� ����:
a.	������������ ������ �������� ����� ���� � ���������� ���������, ���������, ������� ����� ���� ��� ���� ��������
b.	������������ ������ ���������� ����� ����, ���������� ����� � �������� ����� ��������. ���������, ������� ���
���� ����� ��������
c.	������������ ������ ���������� ����� ���� � ���������� ���������, ����������, ������� ����� ��������
���� � �������� �� ������.
*/
			while (true) {
				int string, fine, salary, menu;
				cout << "1 - ������������ ������ �������� ����� ���� � ���������� ���������,"
					"\n\t���������, ������� ����� ���� ��� ���� ��������" << endl;
				cout << "2 - ������������ ������ ���������� ����� ����, ���������� ����� � �������� ����� ��������. "
					"\n\t���������, ������� ��� ���� ����� ��������" << endl;
				cout << "3 - ������������ ������ ���������� ����� ���� � ���������� ���������, ����������, "
					"\n\t������� ����� �������� ���� � �������� �� ������." << endl;
				cin >> menu;
				switch (menu) {
				case 1: {
					cout << "�� � 1 ���� ��� ����:" << endl;
					cout << "�������� ����� ���� - 1300$, ���������� ��������� - 9" << endl;
					cin >> salary >> fine;
					string = ((salary - ((fine / 3) * 20)) / 50) * 100;
					cout << "����� �������� " << string << " ����� ����" << endl;
				}
						break;
				case 2: {
					cout << "�� � 2 ���� ��� ����:" << endl;
					cout << "���������� ����� ����, ���������� ����� - 3600, �������� ����� �������� - 1300$" << endl;
					cin >> string >> salary;
					string = (string / 100) * 50;
					if (salary > string) {
						salary = ((salary - string) / 50) * 100;
						cout << "���� ���� �������� " << salary << " ����� ���� ���� �������� ������� ��" << endl;
						cout << "���� �������� ����� 2 ����, � 3 ��� ������ � -$ � ��������" << endl;
					}
					else
						cout << "���� ����� �� ����� )" << endl;
				}
						break;
				case 3: {
					cout << "�� � 3 ���� ��� ����:" << endl;
					cout << "���������� ����� ���� - 4600, ���������� ��������� - 3" << endl;
					cin >> string >> fine;
					//
					salary = ((string / 100) * 50) - ((fine / 3) * 20);
					(salary >= 0) ? cout << salary << "$ ���� ���������\n" : cout << salary << "$ ���� ����� :)" << endl;
				}
						break;
				default:
					cout << "Think what you write !!!" << endl;

				}

			}
		}break;

		case 5:
		{
		/*5.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ���� ��� ���������� �����*/
				int k = 0;
				int i1, i2, i3;
				for (int i = 100; i <= 999; i++)
				{
					i1 = i / 100; //������ �����
					i2 = i % 10; // ������ �����
					i3 = (i % 100) / 10; //������ �����
					if (i1 == i2 || i2 == i3 || i3 == i1) k++;

				}
				cout << "Result: " << k << "\n";
				system("pause");
		}break;

		case 6:
		{
			/*6.	���������� ���������� ����� ����� � ��������� �� 100 �� 999 � ������� ��� ����� ������*/
			int n1 = 0, n2 = 0, n3 = 0;

			int count = 0;
			for (int i = 100; i <= 999; i++)
			{
				n1 = i / 100;
				n2 = (i / 10) % 10;
				n3 = i % 10;

				if (n1 != n2&&n2 != n3&&n1 != n3)
				{
					count++;
				}
			}
			cout << count << endl;
			system("pause");
		}break;

		case 7:
		{
			/*7.	������������ ������ ����� ����� �����. 
			���������� �� ����� ������ ����� ������� ��� ����� 3 � 6 � ������� ������� �� �����.*/
			int digit;
			do
			{
				cout << "��� ��������� ������� ����� 3 � 6 �� ����� � ������� ������� �� �����\n������� �����: ";
				cin >> digit;
				cout << "\n";
				int out = 0, tmp = 1;
				for (; digit != 0;)
				{
					if (digit % 10 != 3 && digit % 10 != 6) {
						out = out + tmp*(digit % 10);
						tmp *= 10;
					}
					digit /= 10;
				}
				cout << "����� ����� - " << out << "\n";
				cout << "���� ������ ����������, ������� 1: ";
				cin >> digit;
			} while (digit == 1);

		}break;

		case 8:
		{
			/*8.	������������ ������ ����� �����. 
			���������� ������� ��� ����� �����, �� ������� �������� ����� �������� ��� �������.*/
			int num;
			cout << "Insert you number\n";
			cin >> num;

			for (int i = 1; i <= num; i++) {
				if (num%i == 0)
					cout << i << "\n";
			}


		}break;



		}














		system("pause");

	} while (tm != 200);



}

