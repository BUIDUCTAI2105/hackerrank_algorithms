// Cho mang 1 chi�u c�c s� nguy�n, h�y t�m gi� tri d�u ti�n nam trong khoang [x, y] cho truoc. N�u mang kh�ng c� gi� tri thoa di�u ki�n tr�n th� tra v� -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham dautientrongdoan
// 			khoi tao bi�n dem  =  0
//			duy�t tu dau mang toi cuoi mang, n�u a[i] >= x v�  a[i] <= y thi bi�n dem tang l�n
//			n�u dem == 0 th� tra v� gia tri x	ngoai hai cai tr�n thi tra ve a[i]

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

int dautientrongdoan(int a[], int n, int x, int y)
{
	int dem = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] >= x && a[i] <= y)
		{
			dem++;
			break;
		}
	}
	if(dem == 0)
	{
		return x;
	}
	return a[i];
}

int main()
{
	int n;
	int a[MAX];
	int x, y;

	printf("\nNhap x: ");
	scanf("%d", &x);

	printf("\nNhap y: ");
	scanf("%d", &y);

	nhap(a, n);
	xuat(a, n);

	int KQ = dautientrongdoan(a, n, x, y);
	printf("\nGia tri dau tien nam trong doan [%d, %d] la %d", x, y, KQ);
	
	getchar();
	return 0;
}
