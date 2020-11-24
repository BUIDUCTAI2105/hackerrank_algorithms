//Viet hàm sap xep mang mot chieu các so thuc tang dan.
//B1 viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//B2 su dung InterchangeSort de sap xep mang tang dan
//		+ su dung 2 vong lap for de duyet mang 
//			1 vong lap chu vi tri dau (i) den vi tri ke cuoi ( n - 1)
//           vong lap tiep theo chay tu vi trí tiep theo (i+1) den cuoi, hai vong lap nay se chay và kiem dên phan tu nghich the và dôi chô cho nhau

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
			printf("\nloi!");
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
	for(int i = 0; i < n; i++){
		printf(" %4f", a[i]);
	}
}
void InterchangSort(float a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				float t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main()
{
	int n;
	float a[MAX];
	
	nhap(a, n);
	xuat(a, n);
	
	InterchangSort(a, n);
	printf("\n sap xep mang tang: ");
	xuat(a, n);
	
	getchar();
	return 0;
}



