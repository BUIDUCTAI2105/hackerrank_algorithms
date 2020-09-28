// giai pt  ax^2 + bx + c = 0

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float a, b, c; 

	printf("\nNhap vao a = ");
	scanf("%f", &a);

	printf("\nNhap vao b = ");
	scanf("%f", &b);

	printf("\nNhap vao c = ");
	scanf("%f", &c);

	if (a == 0) 
	{
		if (b == 0) 
		{
			if (c == 0)
			{
				printf("\nPhuong trinh co vo so nghiem");
			}
			else
			{
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else
		{

			float x = -c / b;

			printf("\nPhuong trinh co nghiem duy nhat x = %f", x);
		}
	}
	else
	{
		float Denta = b * b - 4 * a * c;

		if (Denta < 0)
		{
			printf("\nPhuong trinh vo nghiem");
		}
		else if (Denta == 0)
		{
			float x = -b / (2 * a);

			printf("\nPhuong trinh co nghiem kep x1 = x2 = %f", x);
		}
		else 
		{
			float x1 = (-b + sqrt(Denta)) / (2 * a);
			float x2 = (-b - sqrt(Denta)) / (2 * a);

			printf("\nPhuong trinh co 2 nghiem phan biet:\nx1 = %f\nx2 = %f", x1, x2);

		}
	}


	getch();
	return 0;
}
