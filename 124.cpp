// Viet h�m kiem tra trong mang c�c so nguy�n c� ton tai gi� tri chan nho hon 2004 hay kh�ng

#include<stdio.h>
#include<conio.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\n loi  !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\n Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf(" %d", a[i]);
	}
}

int kiemtra(int a[], int n)
{
	int t = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && a[i] < 2004){
			t = 1;
		}
	return t;	
	}
}
int main()
{
	int n;
	int a[MAX];
	nhap(a, n);
	xuat(a, n);

	int t = kiemtra(a, n);
	if(t == 1)
	{
		printf("\ntim thay ");
	}
	else
	{
		printf("\nKhong tim thay");
	}


	getch();
	return 0;
}
