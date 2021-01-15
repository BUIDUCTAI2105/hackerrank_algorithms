#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define MAX 1000000

void taoMangRand(int a[], int &n)
{
	srand((int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1 - 1);
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

void quickSort(int a[], int Left, int Right)
{
	if (Left >= Right)
		return;
	int i = Left;
	int j = Right;
	int mid = (Left + Right) / 2;
	do 
	{
		while (a[i] < a[mid])
			i++;
		while (a[j] > a[mid])
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i < j);
	quickSort(a, Left, j);
	quickSort(a, i, Right);
}

int main()
{
	int a[MAX];
	int n;

	cout << "Nhap so luong phan tu n : ";
	cin >> n;

	taoMangRand(a, n);
	cout << "Mang truoc khi sap xep:" << endl;
	xuatMang(a, n);

	cout << "Mang sau khi sap xep la:" << endl;
	clock_t start = clock(); //hàm b?t d?u d?m th?i gian th?c hi?n chuong trình
	quickSort(a, 0, n - 1);
	xuatMang(a, n);
	clock_t finish = clock(); //hàm d?m th?i gian k?t thúc

	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout.precision(6);
	cout << "Thoi gian thuc thi: " << fixed << duration << endl;

	system("pause");
}
