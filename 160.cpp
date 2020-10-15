// Cho mang 1 chiêu các sô thuc, hãy tìm giá tri âm cuôi cùng lon hon giá tri -1. Nêu mang không có giá tri thoa diêu kiên trên thì tra vê -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2:viêt ham timAmCuoiCung, duyêt tu cuôi mang lên 
//			nêu có gia tri nào lon hon -1 và bé hon 0 thi tra vê gia tri dó
//			Nêu mang không có giá tri thoa diêu kiên trên thì tra vê -1

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
	for(int i = 0; i < n; i++){
		printf("%f", a[i]);
	}
}

float timAmCuoiCung(float a[], int n)
{
	for(int i = n - 1; i >= 0; i--){
		if(a[i] > -1 && a[i] < 0){
			return a[i];
		}
	}
	return -1.0;
}
int main()
{
	int n;
	float a[MAX];
	float b[MAX];

	nhap(a, n);
	xuat(a, n);
	float KQ = timAmCuoiCung(a, n);
	printf("\nGia tri am cuoi cung lon hon gia tri -1 la: %f", KQ);
	
	getchar();
	return 0;
}
