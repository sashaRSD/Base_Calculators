#include <math.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>


double(*f[]) (double) = { sin,cos,tan,log10,log,exp,sqrt,abs,floor,ceil };
const char *namefirst[3] = {"Выбор функции", "Выход", NULL};
const char *namesecond[12] = {"sin(x)", "cos(x)", "tan(x)", "log10(x)", "ln(x)", "exp(x)", "Корень", "Модуль", "Округление в меньшую сторону", "Округление в большую сторону", "Назад", NULL};

int menu(const char* name[]);
void selected(void);



int menu(const char* name[])
{
	const char** tmp = name;
	int i = 0;
	while (*tmp) printf("\n%d %s", i++, *tmp++);
	return i;
}
void selected(void)
{
	int sun;
	float x, y;
	bool flag = false;
	while (flag != true)
	{
		printf("_____________________________________________________________________________ \n\n Меню:");
		menu(namefirst);
		printf("\n\n Выберите пункт меню:");
		scanf_s("%d", &sun);
		{
			int fun = 0;
			switch (sun)
			{
			case 0: system("cls");  printf("\n Функции:"); menu(namesecond); printf("\n\n Выберите пункт меню:"); scanf_s("%d", &fun);
				if (fun > 10){
					system("cls");  printf("\n Неверное значение!!! Повторите попытку! \n"); selected(); break;
				} 
				if (fun == 10) break;
				printf("Введите x: "); scanf_s("%f", &x);
		
				if (fun < 3){
				printf("Вычисление y: ");   y = f[fun](x * 3.14159265 / 180); printf_s("\n Результат: %f \n", y); break;
				}
				else{
					printf("Вычисление y: ");   y = f[fun](x); printf_s("\n Результат: %f \n", y); break;
				}

			case 1:  flag = true; break;
			default: system("cls"); printf("\n Неверное значение!!! Повторите попытку! \n"); break;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("\n Вычисление значений X \n");
	selected();
	return 0;
}