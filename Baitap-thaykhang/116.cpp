// Viet chuong trình nhap n và tính tong  S(n) = 1 + 2 + 3 + … + n

#include<stdio.h>
#include<conio.h>

int tong(int n)
{
	int  s = 0;
	int i = 1;
	while(i <= n)
	{
		s = s + i;
		i++;
	}
	return s;
}

int main()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	
	long ketqua = tong(n);
	printf("\nTong = %ld", ketqua);

	getch();
	return 0;
}
