// viet ham liet ke các vi tri ma gia tri tai do là gia tri âm trong M1C các so thuc
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham liet ke các vi tri am
//			duyet tu phan tu dau tien cua mang den pha tu cuoi cùng cua mang	
//				neu co phan tu nào < 0 (a[i] < 0) thi in ra vi tri dó
//			còn neu khong thi thoát khoi vong lap.

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


