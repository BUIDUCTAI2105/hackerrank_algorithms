// cho mang 1 chi�u c�c s� thuc, h�y t�m gi� tri d�u ti�n lon hon gi� tri 2003. N�u mang kh�ng c� gi� tri thoa di�u ki�n tr�n th� tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2 viet mang dautien, duy�t tu dau mang toi cuoi mang
//			n�u c� gia tri nao lon hon 2003 (a[i] > 2003)
//			thi tra ve gia tri d�, n�u khong co gia tri n�o thoa th� tra v� -1

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

float dautien(float a[], int n)
{
	for(int i = 0; i < n; i++){
		if(a[i] > 2003){
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int n;
	float a[MAX];
	float b[MAX];

	nhap(a, n);
	xuat(a, n);
	float KQ = dautien(a, n);
	printf("\nGia tri dau tien lon hon 2003 la: %.3f", KQ);
	
	getchar();
	return 0;
}

