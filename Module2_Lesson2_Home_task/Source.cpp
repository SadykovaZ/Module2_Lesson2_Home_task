﻿#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;

	printf("Введите номер задания:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	Даны два действительных числа. Вывести первое число, если оно больше второго, и оба числа, если это не так.

		int a = 0, b = 0;

		printf("Введите значение a:\t");
		scanf("%d", &a);

		printf("Введите значение b:\t");
		scanf("%d", &b);

		if (a > b)
		{
			printf("Вывести значение a = %d\n", a);

		}
		else
		{
			printf("Вывести значение a и b = %d, %d\n", a, b);
		}

	}

	else if (n == 2)
	{
		//2.	Даны два действительных числа. Заменить первое число нулем, если оно меньше или равно второму, 
		//      и оставить числа без изменения в противном случае.

		int a = 0, b = 0;

		printf("Введите значение a:\t");
		scanf("%d", &a);

		printf("Введите значение b:\t");
		scanf("%d", &b);

		if (a <= b)
		{
			a = 0;
			printf("Значение а равно нулю = %d\n", a);

		}
		else
		{
			printf("a и b оставить без изменения = %d, %d\n", a, b);
		}

	}

	else if (n == 3)
	{
		//3.	Даны три действительных числа. Выбрать из них те, которые принадлежат интервалу (1, 3).

		int a = 0, b = 0, c = 0;

		printf("Введите значение a:\t");
		scanf("%d", &a);

		printf("Введите значение b:\t");
		scanf("%d", &b);

		printf("Введите значение b:\t");
		scanf("%d", &c);


		if (a >= 1 && a <= 3)
		{
			printf("Выбираем значение а = %d\n", a);

		}
		else if (b >= 1 && b <= 3)
		{
			printf("Выбираем значение b = %d\n", b);
		}
		else if (c >= 1 && c <= 3)
		{
			printf("Выбираем значение c = %d\n", c);
		}


	}

	else if (n == 4)
	{
		//4.	Даны действительные числа х, у (х!=у ). Меньшее из. этих двух чисел заменить их полусуммой*, а большее — их удвоенным произведением
		// *Полусумма - x = (x+y)/2;

		int x = 0, y = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);

		if (x != y)
		{
			if (x < y)
			{
				x = (x + y) / 2;
				y = 2 * (x*y);

				printf("Меньшее из двух чисел x заменить полусуммой = %d\n", x);
				printf("Большее y заменить удвоенным произведением = %d\n", y);
			}
			else if (y < x)
			{
				y = (x + y) / 2;
				x = 2 * (y*x);

				printf("Меньшее из двух чисел y заменить полусуммой = %d\n", y);
				printf("Большее x заменить удвоенным произведением = %d\n", x);
			}
		}

		else
		{
			printf("Введите значение, чтобы x не был равен y. \n");
		}



	}

	else if (n == 5)
	{
		//5.	Даны три действительные числа. Возвести в квадрат те из них, значения которых неотрицательны.

		int x = 0, y = 0, z = 0;

		printf("Введите значение x:\t");
		scanf("%d", &x);

		printf("Введите значение y:\t");
		scanf("%d", &y);


		printf("Введите значение z:\t");
		scanf("%d", &z);

		if (x >= 0)
		{
			x = pow(x, 2);
			printf("x= %d\n", x);


		}

		else if (y >= 0)
		{
			y = pow(y, 2);
			printf("y= %d\n", y);


		}

		else if (z >= 0)
		{
			z = pow(z, 2);
			printf("z= %d\n", z);
		}

		else
		{
			printf("Все значения отрицательные. \n");
		}
	}
	else if (n == 6)
	{
		//6.	Если сумма трех попарно различных действительных чисел х, у, z меньше единицы, 
		// то наименьшее из этих трех чисел заменить полусуммой* двух других; в противном случае заменить меньшее из х и у полусуммой* 
		// двух оставшихся значений. 

		float x = 0, y = 0, z = 0;

		printf("Введите значение x:\t");
		scanf("%f", &x);

		printf("Введите значение y:\t");
		scanf("%f", &y);

		printf("Введите значение z:\t");
		scanf("%f", &z);

		if (x != y && x != z && y != z)
		{
			if ((x + y + z) < 1)
			{
				if (x < y && x < z)
				{
					x = (y + z) / 2;
					printf("x = %f\n", x);
				}

				if (y < x && y < z)
				{
					y = (x + z) / 2;
					printf("y = %f\n", y);
				}

				if (z < x && z < y)
				{
					z = (y + x) / 2;
					printf("z = %f\n", z);

				}

			}
			else
			{
				if (x < y)
				{
					x = (y + z) / 2;
					printf("x = %f\n", x);
				}

				if (y < x)
				{
					y = (x + z) / 2;
					printf("y = %f\n", y);
				}
			}

		}
		else
		{
			printf("Значения не должны быть равны друг другу.\n");
		}

	}

	else if (n == 7)
	{
		//7.	Даны действительные числа х, у. Если х и у отрицательны, то каждое значение заменить его модулем; 
		//если отрицательно только одно из них, то оба значения увеличить на 0.5; если оба значения неотрицательны 
		//и ни одно из них не принадлежит отрезку [0.5, 2.0], то оба значения уменьшить в 10 раз; в остальных случаях х и у оставить без изменения. 

		float x = 0, y = 0;

		printf("Введите значение x:\t");
		scanf("%f", &x);

		printf("Введите значение y:\t");
		scanf("%f", &y);

		if (x < 0 && y < 0)
		{
			x = fabs(x);
			printf("x = %f\n", x);

			y = fabs(y);
			printf("y = %f\n", y);

		}

		else if (x < 0 && y >= 0 || y < 0 && x >= 0)
		{
			x = (float)x + 0.5;
			printf("x = %f\n", x);

			y = (float)y + 0.5;
			printf("y = %f\n", y);
		}

		else if (x >= 0 && y >= 0)
		{
			if ((x < 0.5 || x>2) && (y < 0.5 || y>2))
			{
				x = (float)x / 10;
				printf("x = %f\n", x);

				y = (float)y / 10;
				printf("y = %f\n", y);
			}
			else
			{
				printf("x или y принадлежат отрезку [0.5, 2.0]\n");
			}

		}
		else
		{
			x = x;
			y = y;

			printf("х и у оставить без изменения\n = %f, %f", x, y);
		}


	}

	else if (n == 8)
	{
		//8.	Даны действительные положительные числа х, у, z. 
		//  a.Выяснить, существует ли треугольник с длинами сторон х, у, z.
		//	b.Если треугольник существует, то ответить—является ли он остроугольным.


		float x = 0, y = 0, z = 0;

		printf("Введите значение x:\t");
		scanf("%f", &x);

		printf("Введите значение y:\t");
		scanf("%f", &y);

		printf("Введите значение z:\t");
		scanf("%f", &z);

		if (x + y > z && x + z > y && y + z > x)
		{

			printf("Треугольник существует.\n");

			if (pow(x, 2) + pow(y, 2) > pow(z, 2) && pow(x, 2) + pow(z, 2) > pow(y, 2) && pow(y, 2) + pow(z, 2) > pow(x, 2))
			{
				printf("Треугольник остроугольный.\n");
			}
			else
			{
				printf("Треугольник не остроугольный.\n");
			}
		}


		else
		{
			printf("Треугольник не существует.\n");

		}



	}

	else if (n == 9)
	{
		//9.Даны действительные числа а, b, с(a != 0).Полностью исследовать биквадратное уравнение ах4 + Ьх2 + с = 0, 
		// т.е.если действительных корней нет, то должно быть выдано сообщение об этом, иначе должны быть выданы два или четыре корня.

		int a = 0, b = 0, c = 0;
		float y1 = 0, y2 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, d;

		printf("Введите значение a:\t");
		scanf("%d", &a);

		printf("Введите значение b:\t");
		scanf("%d", &b);

		printf("Введите значение c:\t");
		scanf("%d", &c);

		if (a != 0)
		{

			printf("Преобразуем биквадратное уравнение ах4 + Ьх2 + с = 0 в y = ax^2 + bx + c. \n");

			d = pow(b, 2) - 4 * a*c;

			printf("Дискриминант d = %f\n", d);

			if (d > 0)
			{


				y1 = (-b + sqrt(d)) / (2 * a);
				y2 = (-b - sqrt(d)) / (2 * a);

				printf("Корни уравнения равны: y1 = %f\ty2 = %f\n", y1, y2);

				x1 = sqrt(y1);
				x2 = -sqrt(y1);
				x3 = sqrt(y2);
				x4 = -sqrt(y2);

				printf("Корни биквадратного уравнения равны: x1 = %f\nx2 = %f\nx3 = %f\nx4 = %f\n", x1, x2, x3, x4);
			}
			else if (d == 0)
			{
				printf("x1 = %f\nx2 = %f\n", (float)-b / 2 * a, (float)b / 2 * a);

			}
			else if (d < 0)
			{
				printf("Корней нет.\n");
			}

		}

		else
		{
			printf("Значение а не должно быть равно нулю.\n");
		}
	}

	else if (n == 10)
	{
		//10.	Дано действительное число х. Получить целую часть 
		//a.числа х;
		//b.затем—число х, округленное до ближайшего целого;
		//c.затем—число х без дробных цифр


		float x = 0, a;

		printf("Введите значение x = ");
		scanf("%f", &x);

		a = floor(x);
		printf("целое число = %.0f\n", a);

		a = x - a;
		if (a >= 0.5) {
			printf("число х, округленное до ближайшего целого = %.0f\n", ceil(x));
		}
		else printf("целое число = %.0f\n", floor(x));

		int y = (int)x;
		printf("число х без дробных цифр = %d\n", y);


	}

	else
	{
		printf("Такого задания нет, введите другое.\n");
	}
}
