// Tìm giá tri âm dâu tiên trong mang 1 chiêu các so thuc. Nêu mang không có giá tri âm thì tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham tim gia tri amdautien, duyêt tu dâu mang dên cuôi mang
//			nêu có gia tri nào < 0 thì in ra gia tri dó
//			nguoc lai nêu không thì tra ve -1

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

