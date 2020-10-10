//Viet h�m t�m so chan dau ti�n trong mang c�c so nguy�n. Neu mang kh�ng c� gi� tri chan th� tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//B2: viet ham timvitrichandau
// 			duyet c�c ph�n tu tu dau mang toi cuoi mang, neu co phan tu n�o chia het cho 2 (a[i] % 2 == 0) thi in ra vi tri do (return i)
//			nguoc lai neu kh�ng c� gi� tri chan nao thi tra v� gi� tri -1

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
			printf("\nloi roi kiem tra lai !");
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

int timvitrichandau(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			return i;
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

	int vitrichandau = timvitrichandau(a, n);
	printf("\nVi tri chan dau la %d", vitrichandau);

	getchar();
	return 0;
}

