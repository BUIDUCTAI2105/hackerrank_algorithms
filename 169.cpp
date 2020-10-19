//Cho mang 1 chi�u c�c s� nguy�n. H�y vi�t h�m t�m s� chan nho nhat lon hon moi gi� tri c� trong mang
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: vi�t ham timViTriLeDauTien, duy�t tu d�u mang toi cuoi mang, n�u c� gi� tri n�o kh�ng chia h�t cho 2 (a[i] %2 !=0) thi tra v� gia tri i
//			nguoc lai kh�ng c� th� tra v� -1
//B3: viet ham timSoLeLonNhat 
//			su dung bien Min gan gia tri viTriLeDauTien, duyet tu vi tri viTriLeDauTien + 1 toi cuoi mang
//			n�u c� gia tri nao thoa a[i] % 2 != 0 && a[i] < Min, thi Min = a[i]
//			nguoc lai thi tra v� gia tri Min

#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX){
			printf("\nLoi roi kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int timViTriLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++){
		if (a[i] % 2 != 0)
		{
			return i;
		}
	}
	return -1;
}
int timSoLeNhoNhat(int a[], int n, int viTriLeDauTien)
{
	int Min = a[viTriLeDauTien];

	for (int i = viTriLeDauTien + 1; i < n; i++){
		if (a[i] % 2 != 0 && a[i] < Min)
		{
			Min = a[i];
		}
	}
	return Min;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
	
	int viTriLeDauTien = timViTriLeDauTien(a, n);
	if (viTriLeDauTien == -1)
	{
		printf("\nMang khong ton tai so le");
	}
	else
	{
		int Min = timSoLeNhoNhat(a, n, viTriLeDauTien);
		int soChanThoa = Min - 1;
		printf("\nSo chan lon nhat nho hon toan bo gia tri le trong mang la %d", soChanThoa);
	}
	getchar();
	return 0;
}
