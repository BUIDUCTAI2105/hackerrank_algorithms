#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define MAX 100000

void nhapMang(int a[], int &n)
{
	// khoi tao ngau nhien
	srand(time(NULL));

	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	int i;
	if (n > 0)
	{
	a[i] = rand() % 100;
// khoi tao ngau nhien tung phan tu tu chi so 1 toi n - 1
	for (int i = 1; i < n; i++)
	{
		a[i] = a[i - 1] + rand() % 100;
	}
	}
}
void xuatmang(int a[], int n)
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
void selectionSort(int a[], int n)
{
	int i, j, min;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[min]){
				min = j;
				swap(a[min], a[i]);
			}
		}
	}
}
int main()
{
	int a[MAX];
//	int b[MAX], c[MAX];
	int n;
//	cout << "nhap phan tu n=";
//	cin >> n;
	nhapMang(a, n);
	xuatmang(a, n);
	cout << "mang sau khi sap xep la:";
	clock_t start = clock();// ham bat dau dem thoi gian thuc hieen chuong trình

	selectionSort(a, n);
	xuatmang(a, n);
	clock_t finish = clock();// ham deem thoi gian ket thúc
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout <<"\n\n\n";
	printf("Thoi gian thuc thi: %.6lf", duration);
	system("pause");
	
	return 0;
}
