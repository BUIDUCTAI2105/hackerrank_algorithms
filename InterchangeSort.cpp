// Interchange_Sort.cpp : Defines the entry point for the console application.
//

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
void InterchangeSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
	for (int j = i +1; j < n; j++)
	{
	if(a[i] > a[j])
		swap(a[i], a[j]);
	}
	}
}
void swap (int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int A[100];
	nhapmang(A , n);
	InterchangeSort(A, n);
	xuatmang(A , n);
	getchar();
	return 0;
}

