// viet ham liet ke c�c vi tri ma gia tri tai do l� gia tri �m trong M1C c�c so thuc
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham liet ke c�c vi tri am
//			duyet tu phan tu dau tien cua mang den pha tu cuoi c�ng cua mang	
//				neu co phan tu n�o < 0 (a[i] < 0) thi in ra vi tri d�
//			c�n neu khong thi tho�t khoi vong lap.

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
			printf("\nloi!");
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

void lietkevitri_am(float a[], int n)
{
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
		{
			printf("%4d", i);
		}
	}
}
int main()
{
	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);
	printf("\nCac vi tri chua gia tri am la: ");
	lietkevitri_am(a, n);

	getchar();
	return 0;
}


