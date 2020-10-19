// Cho mang 1 chi�u c�c s� nguy�n. H�y vi�t h�m t�m b�i chung nho nhat cua t�t ca c�c ph�n tu trong mang
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timSoLonNhat
//			su dung ham max bang voi gia tri dau tien
//			duy�t tu gia tri tiep theo toi cuoi mang
//			n�u c� gia tri nao > max, thi min bang vs gia tri d�
//			nguoc lai n�u khong co tra v� max
//B3: viet ham timBoiChungNhoNhat
//			su dung bien boiSo gan bang timSoLonNhat
//			n�u c� gia tri boiSo nao kh�ng chia h�t cho gia tri a[i] th� boiSo += TimSoLonNhat(a, n) v� i = -1(reset lai i )
//			nguoc lai tra v� boiSo

#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nloi roi kiem tra lai !");
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
int timSoLonNhat(int a[], int n)
{
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int timBoiChungNhoNhat(int a[], int n)
{
	int boiSo = timSoLonNhat(a, n); 
	for(int i = 0; i < n; i++)
	{
		if(boiSo % a[i] != 0)
		{
			boiSo += timSoLonNhat(a, n);
			i = -1;    
		} 
	}
	return boiSo;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int KQ = timBoiChungNhoNhat(a, n);
	printf("\nBoi chung nho nhat cua mang la %d", KQ);

	getchar();
	return 0;
}
