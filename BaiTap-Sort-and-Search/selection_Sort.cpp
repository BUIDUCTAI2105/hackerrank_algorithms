// SelectionSort.cpp : Defines the entry point for the console application.
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
// swap là hàm đổi chỗ hai phần tử
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Selection_Sort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i ++)
		{
			int min = i;
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < a[min])
					min = j;
				swap (a[i], a[min]);
			}
	}
}
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
	Selection(A, n);
	xuatmang(A , n);

	int m;
	scanf_s("%d", &m);
	
	getchar();
	
}