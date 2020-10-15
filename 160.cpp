// Cho mang 1 chi�u c�c s� thuc, h�y t�m gi� tri �m cu�i c�ng lon hon gi� tri -1. N�u mang kh�ng c� gi� tri thoa di�u ki�n tr�n th� tra v� -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2:vi�t ham timAmCuoiCung, duy�t tu cu�i mang l�n 
//			n�u c� gia tri n�o lon hon -1 v� b� hon 0 thi tra v� gia tri d�
//			N�u mang kh�ng c� gi� tri thoa di�u ki�n tr�n th� tra v� -1

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
