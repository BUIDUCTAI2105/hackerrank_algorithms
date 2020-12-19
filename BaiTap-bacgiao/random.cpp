// sap xep voi so ngau nhien
// random

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

void nhapNgauNhien(int a[], int& n) 	//dung rand
{

	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);

	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 199 - 99; //[-99 .. 99]
	}
}


void Print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = a;
}

void selectionSort(int a[], int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		if (a[j] < a[min])
			min = j;
		swap(a[min], a[i]);
	}
}
int main()
{
	int a[MAX];
	int n = 0;
	
	
	nhapNgauNhien(a,n);
	Print(a, n);
	
	selectionSort(a, n);
	Print(a, n);
	
	system("pause");
}
