// tìm giá tri trong mang các sô thuc xa giá tri x nhat
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: Tao mang b chua các khoang cách tu x dên các giá tri trong mang a
//		duyêt tu dâu mang toi cuoi b[i] = abs(x - a[i]) (giá tri tuyet dôi cua hiêu khaong cách x dên a)
//B3:  Tìm max cua mang b
//		nêu có giá tri nào cua mang b[i] lon hon max thì max = b[i]
//
//B4: xuat ket qua b 
//		Duyêt tu dâu mang toi cuoi mang, nêu b[i] = max
//		Ðôi chiêu qua mang a, in phân tu o vi trí thu i thoa ÐK	

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
	for(int i = 0; i < n; i++)
	{
		printf("%8.3f", a[i]);
	}
}


void taoMang(float a[], int n, float b[], int x)
{
	for(int i = 0; i < n; i++)
	{
		b[i] = abs(x - a[i]);
	}
}


float timMax(float b[], int n)
{
	int Max = b[0];
	for (int i = 1; i < n; i++)
	{
		if (b[i] > Max)
		{
			Max = b[i];
		}
	}
	return Max;
}
void xuatKetQua(float a[], float b[], int n)
{
	printf("\nGia tri trong mang xa gia tri x nhat la: ");
	int Max = timMax(b, n);
	for (int i = 0; i < n; i++)
	{
		if (b[i] == Max)    
		{
			printf("%f", a[i]); 
		}
	}
}

int main()
{
	int n;
	float a[MAX];
	float b[MAX];

	nhap(a, n);
	xuat(a, n);

	float x;
	printf("\nNhap vao gia tri x: ");
	scanf("%f", &x);

	taoMang(a, n, b, x);
	printf("\nKhoang cach tu x = %.3f den cac phan tu trong mang la:\n", x);
	xuat(b, n);
	xuatKetQua(a, b, n);

	getch();
	return 0;
}
