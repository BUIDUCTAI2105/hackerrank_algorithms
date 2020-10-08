//Tìm “giá tri duong dâu tiên” trong mang mot chieu các so thuc (duongdau). Nêu mang không có giá tri duong thì tra ve giá tri -1.
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham tim gia tri duongdautien duyet tu phan tu dau mang dên phan tu cuoi cua mang
//				neu có phan tu nao duong (a[i] > 0) thi in ra man hinh a[i]
//				neu không có giá tri duong nào thi tra vê gia tri -1 ( return -1)

#include<stdio.h>
#include<conio.h>
#define MAX 100

void nhap (float a[], int &n)
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

float duongdautien(float a[], int n)
{
    for (int i=0; i<n; i++)
    {
         if (a[i]>0)
         {
             return a[i];
         }
    }
    return -1;
}
int main()
{
	int n;
	float a[MAX];
	nhap(a, n);
	xuat(a, n);

	float duongdau = duongdautien(a, n);

	printf("\nPhan tu duong dau tien trong mang la %.3f", duongdau);

	getch();
	return 0;
}
