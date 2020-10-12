// T�m so duong cuoi c�ng trong mang so thuc. N�u mang kh�ng c� gi� tri duong th� tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham tim duongcuoicung, duy�t tu cuoi mang l�n
// 			n�u c� gia tri n�o > 0 th� in ra gia tri d�
//			nguoc lai kh�ng c� th� tra ve -1

#include<stdio.h>
#define MAX 100

void nhap (float a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nloi roi kiem tra lai!");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf(" %f", &a[i]);
	}
}

void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf(" %4f", a[i]);
	}
}

float duongcuoicung(float a[], int n)
{
	for(int i = n - 1; i >= 0; i--){
		if(a[i] > 0){
			return a[i];
		}
	}
	
	return -1;
}

int main()
{
	int n;
	float a[MAX];
	nhap(a, n);
	xuat(a, n);
	
	float duongcuoi = duongcuoicung(a, n);
	printf("\n Gia tri duong cuoi cung la %f", duongcuoi);
	
	getchar();
	return 0;
}	



