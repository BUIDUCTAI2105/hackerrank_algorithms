// do thoi gian chay cua thuat toan Sort( dai dien là Interchange và selection)
// B1: can viet ham nhap và xuat mang 
//B2: viet ham dôi chô cac phan tu swap
//B3: viet ham interchange/selectionSort
//B4: o ham main viet clock_t start = clock();// ham bat dau dem thoi gian thuc hieen chuong trình( thoi gian cua may khi bat dau an chay code)
//											viet thuat toan can do vào
// 				viet tiep clock_t finish = clock();// ham deem thoi gian ket thúc
// thoi gian chay cua thuat toan se duoc tinh = thoi gian ket thuc thuat toan (finish) - thoi gian bat dau chay thuat toan (star)
//				vì thoi gian chay cua thuat toan rat nhanh co thê chi mat toi 0.002s - 0.004s nên thuong no se tra vê thoi gian là 0.00
//				neu muôn xac nhan thoi gian chay chinh xac nhat thi phai tang so item(phan tu ) luc nhap mang vao no se cho ra ket qua tôt nhat và thay ro nhat 
//				ap dung phuong phap docFile vao thi có the cho dc kq la in ra thoi gian chay thuat toan
#include <iostream>
#include <time.h>
using namespace std;

#define MAX 100


void nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu thu a[" << i << "] :";
		cin >> a[i];
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
//void selectionSort(int a[], int n)
//{
//	int i, j, min;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		min = i;
//		for (int j = i + 1; j < n; j++){
//			if (a[j] < a[min]){
//				min = j;
//				swap(a[min], a[i]);
//			}
//		}
//	}
//}

void interchangeSort(int a[], int n)
{
	for(int i = 0; i < n - 1; i ++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				swap (a[i], a[j]);
			}
		}
	}
}
	

int main()
{
	int a[MAX], n,c,b;
	cout << "nhap phan tu n=";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "mang sau khi sap xep la:";
	clock_t start = clock();// ham bat dau dem thoi gian thuc hieen chuong trình
//	selectionSort(a, n);
	interchangeSort(a, n);
	xuatmang(a, n);
	clock_t finish = clock();// ham deem thoi gian ket thúc
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout <<"\n\n\n";
	printf("Thoi gian thuc thi: %.2lf", duration);
	system("pause");
	
	return 0;
}
