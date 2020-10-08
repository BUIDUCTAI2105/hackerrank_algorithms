// Tìm “so chan cuoi cùng” trong mang môt chiêu các so nguyên (chancuoi). Neu mang không có giá tri chan thì tri ve giá tri -1.
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham tinchancuoi duyet tu phan cuoi mang len
//			neu co phan tu nào chia het cho 2 (a[i] % 2 == 0) thi in ra phan tu do (return a[i]	
//			nguoc lai neu không có giá tri chan nao thi tra vê giá tri -1

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

int timchancuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(a[i] % 2 == 0)
		{
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
	int chancuoi = timchancuoi(a, n);
	printf("\nGia tri chan cuoi la %d", chancuoi);

	getchar();
	return 0;
}
