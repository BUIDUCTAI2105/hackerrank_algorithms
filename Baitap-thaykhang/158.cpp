// Cho mang 1 chiêu các sô thuc, hãy tìm giá tri x sao cho doan [-x, x] chua tat ca các giá tri trong mang
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timx 
//			gan cho x = a[0] phan tu dâu tien
// 			duyêt tu phan tu thu 1 dên cuôi mang
//			 x = (x > (fabs)(a[i])) ?  x  :  (fabs)(a[i])
//			tra vê x

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

float timx(float a[], int n)
{
	float x = a[0];
	for(int i = 1; i < n; i++){
		 x = (x > (fabs)(a[i])) ?  x  :  (fabs)(a[i]);
	}
	 return x;
}

int main()
{
	int n;
	float a[MAX];
	float b[MAX];

	nhap(a, n);
	xuat(a, n);
	float x = timx(a, n);
	printf("\nGia tri %.f thoa dieu kien doan [-%f, %f] chua tat ca cac gia tri trong mang", x, x, x);
	
	getchar();
	return 0;
}
