// viet ham liet ke các gia tri chan trong mang 1 chieu 

// B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
// B2: viet ham liet ke cac sô chan trong mang
//			duyet tu dau mang den cuoi mang neu có phan tu nao chia het cho 2 ( a[i] % 2 == 0 ) thi in ra phan tu do
//			con neu khong co thoat khoi vong lap.


#include<stdio.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
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

void lietkechan(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%4d", a[i]);
		}
	}
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
	printf("\nCac gia tri chan trong mang la: ");
	lietkechan(a, n);

	getchar();
	return 0;
}
