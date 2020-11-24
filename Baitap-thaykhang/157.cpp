// Cho mang 1 chiêu các sô thuc, hãy tìm doan [a, b] sao cho doan này chua tât ca các giá tri trong mang
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viêt ham tìm doan
//			gan max = a[0] va min a[0]
//			duyêt tu dâu mang toi cuoi mang 
//			max = (a[i] > max) ? a[i] : max
//	    	min = (a[i] < min) ? a[i] : min
//			==> in ra cac gia tri có trong doan

#include<stdio.h>
#include<math.h>
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
		scanf("%f", &a[i]);
	}
}

void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%8.3f", a[i]);
	}
}

void timdoan(float a[], int n)
{
	float max = a[0];
	float min = a[0];
	for(int i = 0; i < n; i++)
	{
		max = (a[i] > max) ? a[i] : max;
		min = (a[i] < min) ? a[i] : min;
	}
	 printf("\n[ %.3f , %.3f ] la doan chua cac gia tri trong mang\n", min, max);
}
int main()
{
	int n;
	float a[MAX];
	float b[MAX];

	nhap(a, n);
	xuat(a, n);
	timdoan(a, n);
	

	getchar();
	return 0;
}
