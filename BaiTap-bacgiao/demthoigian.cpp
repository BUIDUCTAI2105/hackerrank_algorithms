// do thoi gian chay cua thuat toan Sort( dai dien l� Interchange v� selection)
// B1: can viet ham nhap v� xuat mang 
//B2: viet ham d�i ch� cac phan tu swap
//B3: viet ham interchange/selectionSort
//B4: o ham main viet clock_t start = clock();// ham bat dau dem thoi gian thuc hieen chuong tr�nh( thoi gian cua may khi bat dau an chay code)
//											viet thuat toan can do v�o
// 				viet tiep clock_t finish = clock();// ham deem thoi gian ket th�c
// thoi gian chay cua thuat toan se duoc tinh = thoi gian ket thuc thuat toan (finish) - thoi gian bat dau chay thuat toan (star)
//				v� thoi gian chay cua thuat toan rat nhanh co th� chi mat toi 0.002s - 0.004s n�n thuong no se tra v� thoi gian l� 0.00
//				neu mu�n xac nhan thoi gian chay chinh xac nhat thi phai tang so item(phan tu ) luc nhap mang vao no se cho ra ket qua t�t nhat v� thay ro nhat 
//				ap dung phuong phap docFile vao thi c� the cho dc kq la in ra thoi gian chay thuat toan
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
	clock_t start = clock();// ham bat dau dem thoi gian thuc hieen chuong tr�nh
//	selectionSort(a, n);
	interchangeSort(a, n);
	xuatmang(a, n);
	clock_t finish = clock();// ham deem thoi gian ket th�c
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout <<"\n\n\n";
	printf("Thoi gian thuc thi: %.2lf", duration);
	system("pause");
	
	return 0;
}
