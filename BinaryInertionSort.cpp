// Binary_Insertion_Sort.cpp : Defines the entry point for the console application.
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

void BinaryInertionSort (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = a[i]; // lưu giá trị a[i] tránh bị ghi đè khi dời chỗ các phần tử
		int Left = 0;
		int Right = i - 1;
		while (Left <= Right) // tìm vị trí cần chèn  x
		{
			int Mid = (Left + Right)/2; // tìm vị trí thích hợp Mid
			if (x < a[Mid])
				Right = Mid - 1;
			else
				Left = Mid - 1;
		}
		// dời các phần tử lớn hơn phần tử cần chèn qua phải I vị trí
		for (int j = i - 1; j >= Left; j--)
			a[j +1] = a[j];// dời các phần tử đứng sau x
		a[Left] = x; // chèn x vào đây
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
	
	BinaryInertionSort(A, n);
	xuatmang(A , n);
	int m;
	scanf_s("%d", &m);
	
	getchar();
	//
}