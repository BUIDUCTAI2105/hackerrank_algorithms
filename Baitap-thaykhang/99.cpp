// Viet chuong tr�nh nhap v�o 3 so thuc. H�y in 3 so thuc ay ra m�n h�nh theo thu tu tang dan m� chi d�ng toi da hai bien phu

#include<stdio.h>
#include<conio.h>
int main()
{

	int a, b, c, t;
	printf("\nNhap a: ");
	scanf("%d", &a);

	printf("\nNhap b: ");
	scanf("%d", &b);

	printf("\nNhap c: ");
	scanf("%d", &c);
	
	if(a > b) 
	{
		t = a; 
		a = b; 
		b = t;
	}
	if(a > c)
	{
		t = a; 
		a = c; 
		c = t;
	}
	if(b > c)
	{
		t = b; 
		b = c;
		c = t;
	}

	printf("\nTang dan: %d %d %d ",a, b, c);


	getch();
	return 0;
}

// giong interchange sort 
