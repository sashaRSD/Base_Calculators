#include<iostream> 
#include<Windows.h>
#include <conio.h>



using namespace std;

float cinn(char name)
{
	bool success = false;
	float x;
	while (!success) {
		cin >> x;
		if (cin.good()) success = true;
		else {
			system("cls");
			cout << " �������� ������� �������." << endl<< " ��������� ���� "<<name<<": ";
			cin.clear();
			while (getchar() != '\n');
		}
	}
	return x;
}

void main() {
	SetConsoleCP(1251); // ���� � ������� � ��������� 1251
	SetConsoleOutputCP(1251); // ����� �� ������� � ��������� 1251.
	float x;
	char name;
	char alf[5] = {"+-/*"};
	float A = 0, b = 0, c = 0;

	cout << " ������� �: "; b = cinn(name = 'x');

	cout << " ������� ���� (+ - / *): "; char zn = _getch();
	while ((!strchr(alf, zn)) || (zn == NULL)) {zn = _getch();}
	cout << zn; while (getchar() != '\n'); name = getchar();

	cout << " ������� y: ";c = cinn(name = 'y');


	cout << endl << " ���������: " << endl;
	cout << b;

	switch (zn)
	{
	case '-': 	cout << " - "; A = b - c; 
		break;
	case '+': 	cout << " + "; A = b + c;
		break;
	case '/': 	cout << " / "; A = b / c;
		break;
	case '*': 	cout << " * "; A = b * c;
		break;
	default: system("cls"); printf("\n �������� ��������!!! ��������� �������! \n"); break;
	}
	cout <<c << " = " << A << endl;

	system("pause");
}