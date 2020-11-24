#include "stdafx.h"
void nhapmang(int a[], int &n)
{
	printf("nhap so phan tu mang: ");
	scanf_s("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("a[%] = ",i);
		scanf_s("%d", &a[i]);
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);	
	}
}
// swap là hàm đổi chỗ hai phần tử
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
int LinearSearch(int a[], int n, int x)
{
	for (int i = 0; i < n; i ++)
		if(a[i] == x)
			return i;
	return -1			
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;
	printf("nhap so phan tu mang: ");
	scanf_s("%d", &n);
	int A[100];
    for(int i = 0; i < n; i++)
	{
		printf("a[%] = ",i);
		scanf_s("%d", &A[i]);
	}
	LinearSearch(A, n);
	xuatmang(A , n);

	int m;
	scanf_s("%d", &m);
	
	getchar();
	
}
