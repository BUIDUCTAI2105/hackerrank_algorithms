#include "stdafx.h"
#include "stdlib.h"
#define maxarray 100
void xuatmang(int a[], int n);
void nhapmang(int a[], int &n);
void Insertion_Sort();
void Interchang_Sort();
void BinaryInsertion_Sort();
void Selection_Sort();
void swap(int &a, int &b)
int _tmain(int argc, _TCHAR* argv[])
{
int lenh;
do{
printf("\n choose an order");
printf("\n  1 choose Insertion_Sort ");
printf("\n  2 choose Insertion_Sort ");
printf("\n  3 choose BinaryInsertion_Sort ");
printf("\n  4 choose Selection_Sort ");
printf("\n  0 exit ");
scanf("%d",&lenh);
switch (lenh){
case 1: Insertion_Sort();break;
case 2: Interchang_Sort();break;
case 3: BinaryInsertion_Sort();break;
case 4: Selection_Sort();
default: 
break;
}
}while (lenh != 0);
return 0;
}

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
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
void InterchangeSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i +1; j < n; j++)
		{
			if(a[i] > a[j])
				swap123(a[i], a[j]);
		}
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
void BinaryInertionSort (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = a[i]; // luu giá tr? a[i] tránh b? ghi dè khi d?i ch? các ph?n t?
		int Left = 0;
		int Right = i - 1;
		while (Left <= Right) // tìm v? trí c?n chèn  x
		{
			int Mid = (Left + Right)/2; // tìm v? trí thích h?p Mid
			if (x < a[Mid])
				Right = Mid - 1;
			else
				Left = Mid - 1;
		}
		// d?i các ph?n t? l?n hon ph?n t? c?n chèn qua ph?i I v? trí
		for (int j = i - 1; j >= Left; j--)
			a[j +1] = a[j];// d?i các ph?n t? d?ng sau x
		a[Left] = x; // chèn x vào dây
	} 
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
	InterchangeSort(A, n);
	xuatmang(A , n);

	int m;
	scanf_s("%d", &m);
	
	
	BinaryInertionSort(A, n);
	xuatmang(A , n);
	int m;
	scanf_s("%d", &m);
	
	Selection(A, n);
	xuatmang(A , n);

	int m;
	scanf_s("%d", &m);
	
	getchar();
	
	InsertionSort(A, n);
	xuatmang(A , n);
	int m;
	scanf_s("%d", &m);
	
	getchar();
	
}
	

