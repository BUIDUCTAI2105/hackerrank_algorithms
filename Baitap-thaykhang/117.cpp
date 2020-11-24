// Viet chuong tr�nh nhap n v� t�nh tong S(n) = x + x^2 + x^3 + � + x^n

#include<stdio.h>
#include<conio.h>
float tong(float, int);
float luythua(float, int);

float luythua(float x, int n)
{
	float t = 1;
	for(int i = 1; i <= n; i++)
	{
		t = t * x;
	}
	return t;
}

float tong(float x, int n)
{
	float s = 0;
	for(int i = 1; i <= n; i++)
	{
		s = s + luythua(x, i);
	}
	return s;
}

int main()
{
	int n;
	float x;

	printf("\nNhap n: ");
	scanf("%d", &n);

	printf("\nNhap x: ");
	scanf("%f", &x);

	float ketqua = tong(x, n);
	printf("\nTong: %f",ketqua);

	getch();
	return 0;
}

