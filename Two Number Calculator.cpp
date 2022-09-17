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
			cout << " Значение введено неверно." << endl<< " Повторный ввод "<<name<<": ";
			cin.clear();
			while (getchar() != '\n');
		}
	}
	return x;
}

void main() {
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251.
	float x;
	char name;
	char alf[5] = {"+-/*"};
	float A = 0, b = 0, c = 0;

	cout << " Введите х: "; b = cinn(name = 'x');

	cout << " Введите знак (+ - / *): "; char zn = _getch();
	while ((!strchr(alf, zn)) || (zn == NULL)) {zn = _getch();}
	cout << zn; while (getchar() != '\n'); name = getchar();

	cout << " Введите y: ";c = cinn(name = 'y');


	cout << endl << " Результат: " << endl;
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
	default: system("cls"); printf("\n Неверное значение!!! Повторите попытку! \n"); break;
	}
	cout <<c << " = " << A << endl;

	system("pause");
}