//T�m gi� tri nho nhat trong mang 1 chieu so thuc
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: vi�t ham timGiaTriNhoNhat duyet tu d�u mang toi cuoi mang
//			n�u c� gia tri nao nho hon min th� min = gi� tri d� ( min = a[i])
//			nguoc lai neu ko c� th� thoat khoi vong lap 

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
float timGiaTriNhoNhat(float a[], int n)
{
	float min = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
int main()
{
	int n;
	float a[MAX];
	nhap(a, n);
	xuat(a, n);

	float min = timGiaTriNhoNhat(a, n);

	printf("\nPhan tu nho nhat trong mang la %.2f", min);

	getchar();
	return 0;
}

