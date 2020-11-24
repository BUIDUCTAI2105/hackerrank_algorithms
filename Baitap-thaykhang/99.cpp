// Viet chuong trình nhap vào 3 so thuc. Hãy in 3 so thuc ay ra màn hình theo thu tu tang dan mà chi dùng toi da hai bien phu

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
