// Viet h�m t�nh S = CanBacN(x)

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double s;
    float x, n;

	printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap n: ");
	scanf("%f", &n);
	n = 1/ n;
	s = pow(x, n);

	printf("Can bac %.2f cua %.2f la %.2f",1/n, x, s);

	getch();
	return 0;
}
