#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void taoMangFile(int a[SIZE], int &n, char *file)
{
	FILE *f = fopen(file, "r");
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%d", &a[i]);
	}
	fclose(f);
}

void xuatMang(int a[SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int timViTriX(int a[SIZE], int n, int x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = a;
}

void selectionSort(int a[SIZE], int n)
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

int ktSoHoanHao(int n)
{
	int tong = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}
	}
	if (tong == n)
	{
		return 1;
	}
	return 0;
}

int demSoHoanHao(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktSoHoanHao(a[i]))
		{
			dem++;
		}
	}
	return dem;
}

int main()
{
	int a[SIZE], n;
	int chon;
	do
	{
		printf("=======MENU=======");
		printf("\n1 doc du lieu tu file");
		printf("\n2 xuat mang");
		printf("\n3 tim x cuoi");
		printf("\n4 sap xep tang dan");
		printf("\n5 dem so hoan hao");
		printf("\nBan chon chuong trinh: ");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
		{
				  taoMangFile(a, n, "input.txt");
				  break;
		}
		case 2:
		{
				  xuatMang(a, n);
				  break;
		}
		case 3:
		{
				  int x;
				  printf("Nhap x: ");
				  scanf("%d", &x);
				  if (timViTriX(a, n, x) == -1)
				  {
					  printf("Khong co x trong mang");
				  }
				  else
				  {
					  printf("x o vi tri %d", timViTriX(a, n, x) + 1);
				  }
				  break;
		}
		case 4:
		{
				  selectionSort(a, n);
				  xuatMang(a, n);
				  break;
		}
		case 5:
		{
				  printf("Co %d so hoan hao trong mang", demSoHoanHao(a, n));
				  break;
		}
		default:printf("Khong co chuong trinh nay!");
			break;
		}
	} while (chon != 0);
	system("pause");
	return 0;
}
