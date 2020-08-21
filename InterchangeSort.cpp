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
void InterchangeSort(int *a, int n)
{
   for (int i = 0; i < n-1; i++)
      for (int j = i+1; j < n; j++)
         if (a[i] > a[j])
         {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
}
int _tmain(int argc, _TCHAR* argv[])
{
	int a[100];
	int n;
	nhapmang(a, n);
	InterchangeSort(a, n);
	xuatmang(a, n);
	getchar();
	return 0;
}


