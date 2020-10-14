// tìm vi trí giá tri âm nho nhât trong mang các sô thuc. Nêu mang không có sô âm thì tra vê -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timvitriamdau, gán vitri = -1
// 			duyêt tu dâu mang dên cuôi mang
//          nêu a[i] bé hon 0, thì vitri = i
//
//B3: viet ham vitriamlonnhat duyêt tu vitriamdau + 1 toi cuoi 
//			nêu a[i] < 0 và a[i] > a[vitriamdau] thì vitriamdau = i

#include<stdio.h>
#include<conio.h>
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
			printf("\nloi roi kiem tra lai !");
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

int timvitriamdau(float a[], int n)
{
	int vitri = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			vitri = i;
		}
	}
	return vitri;
}

float vitriamlonnhat(float  a[], int n, int vitriamdau)
{
	for (int i = vitriamdau + 1; i < n; i++)
	{
		if (a[i] < 0 && a[i] > a[vitriamdau])
		{
			vitriamdau = i;
		}
	}
	return vitriamdau;
}
int main()
{
	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);

	int vitriamdau = timvitriamdau(a, n);
	if(vitriamdau == -1)
	{
		printf("\nMang khong co so am");
	}
	else
	{
		int vitri = vitriamlonnhat(a, n, vitriamdau);
		printf("\nVi tri phan tu am lon nhat trong mang: %d",vitri);
	}

	getch();
	return 0;
}
