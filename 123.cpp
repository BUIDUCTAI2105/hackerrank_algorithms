// Viet h�m t�m mot ve tr� m� gi� tri tai vi tr� d� l� mot gi� tri nho nhat trong mang mot chieu c�c so nguy�n


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

int timvitrinhonhat(int a[], int n)
{
	int vtnn = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < a[vtnn])
		{
			vtnn = i;
		}
	}
	return vtnn;
}
int main()
{
	int n;
	int a[MAX];
	nhap(a, n);
	xuat(a, n);

	int vtnn = timvitrinhonhat(a, n);

	printf("\nVi tri chua phan tu nho nhat la %d", vtnn);

	getch();
	return 0;
}
