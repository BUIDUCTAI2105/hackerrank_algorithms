// T�m s� ch�nh phuong d�u ti�n trong mang 1 chi�u c�c s� nguy�n
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraChinhPhuong (S� ch�nh phuong l� s� m� KQ khai can b�c 2 l� 1 s� nguy�n)
//			
//B3: vi�t timChinhPhuongDauTien, duy�t tu d�u mang toi cuoi mang
//			n�u kiemTraChinhPhuong(a[i]) == 1 thi tra v� a[i]
//			n�u kh�ng c� s� nao thoa kiemTraChinhPhuong(a[i]) == 1 th� tra v� -1

#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSai roi kiem tra lai !");
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
bool kiemTraChinhPhuong(int n)
{
	return sqrt(float(n)) == (int)sqrt((float)n);
}
int timChinhPhuongDauTien(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(kiemTraChinhPhuong(a[i]) == 1)
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
	int x, y;

	nhap(a, n);
	xuat(a, n);
	
	int KQ = timChinhPhuongDauTien(a, n);
	printf("\nSo chinh phuong dau tien la: %d", KQ);

	getchar();
	return 0;
}

