#include <math.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>


double(*f[]) (double) = { sin,cos,tan,log10,log,exp,sqrt,abs,floor,ceil };
const char *namefirst[3] = {"����� �������", "�����", NULL};
const char *namesecond[12] = {"sin(x)", "cos(x)", "tan(x)", "log10(x)", "ln(x)", "exp(x)", "������", "������", "���������� � ������� �������", "���������� � ������� �������", "�����", NULL};

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
		printf("_____________________________________________________________________________ \n\n ����:");
		menu(namefirst);
		printf("\n\n �������� ����� ����:");
		scanf_s("%d", &sun);
		{
			int fun = 0;
			switch (sun)
			{
			case 0: system("cls");  printf("\n �������:"); menu(namesecond); printf("\n\n �������� ����� ����:"); scanf_s("%d", &fun);
				if (fun > 10){
					system("cls");  printf("\n �������� ��������!!! ��������� �������! \n"); selected(); break;
				} 
				if (fun == 10) break;
				printf("������� x: "); scanf_s("%f", &x);
		
				if (fun < 3){
				printf("���������� y: ");   y = f[fun](x * 3.14159265 / 180); printf_s("\n ���������: %f \n", y); break;
				}
				else{
					printf("���������� y: ");   y = f[fun](x); printf_s("\n ���������: %f \n", y); break;
				}

			case 1:  flag = true; break;
			default: system("cls"); printf("\n �������� ��������!!! ��������� �������! \n"); break;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("\n ���������� �������� X \n");
	selected();
	return 0;
}