// T�m gi� tri �m d�u ti�n trong mang 1 chi�u c�c so thuc. N�u mang kh�ng c� gi� tri �m th� tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham tim gia tri amdautien, duy�t tu d�u mang d�n cu�i mang
//			n�u c� gia tri n�o < 0 th� in ra gia tri d�
//			nguoc lai n�u kh�ng th� tra ve -1

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

int amdautien(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
         if (a[i] < 0)
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

	int amdau = amdautien(a, n);
	printf("\nGia tri am dau tien la %d", amdau);
	getchar();
	return 0;
}

