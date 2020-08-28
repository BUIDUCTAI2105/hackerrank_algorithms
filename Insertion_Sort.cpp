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

void InsertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int j;
			for (j = i - 1; j >= 0; j++)
		{
				if(a[j] > x)
					a[j + 1] = a[j];
				else 
					break;
		}
			a[j + 1] = x;
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
	
	InsertionSort(A, n);
	xuatmang(A , n);
	int m;
	scanf_s("%d", &m);
	
	getchar();
	//
}
