// Tìm sô chính phuong dâu tiên trong mang 1 chiêu các sô nguyên
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraChinhPhuong (Sô chính phuong là sô mà KQ khai can bâc 2 là 1 sô nguyên)
//			
//B3: viêt timChinhPhuongDauTien, duyêt tu dâu mang toi cuoi mang
//			nêu kiemTraChinhPhuong(a[i]) == 1 thi tra vê a[i]
//			nêu không có sô nao thoa kiemTraChinhPhuong(a[i]) == 1 thì tra vê -1

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

