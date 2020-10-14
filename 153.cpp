// t�m gi� tri chan nho nh�t trong mang 1 chi�u c�c s� nguy�n. N�u mang kh�ng c� s� chan th� tra v� -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//B2: viet ham timvitrichandau
// 			duyet c�c ph�n tu tu dau mang toi cuoi mang, neu co phan tu n�o chia het cho 2 (a[i] % 2 == 0) thi in ra vi tri do (return i)
//			nguoc lai neu kh�ng c� gi� tri chan nao thi tra v� gi� tri -1
//B3: viet h�m timChanNhoNhat, duy�t tu d�u mang toi cuoi mang
// 			n�u a[i] % 2 == 0 v�  a[i] < chanNhoNhat th� a[i] = chanNhoNhat

#include<stdio.h>
#include<conio.h>
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
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
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
int timViTriChanDau(int a[], int n)
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

int timChanNhoNhat(int a[], int n, int viTriChanDau)
{
	int chanNhoNhat = a[viTriChanDau];
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && a[i] < chanNhoNhat)
		{
			a[i] = chanNhoNhat;
		}
	}
	return chanNhoNhat;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int viTriChanDau = timViTriChanDau(a, n);

	if(viTriChanDau == -1)
	{
		printf("\nMang khong co so chan");
	}
	else
	{
		int chanNhoNhat = timChanNhoNhat(a, n, viTriChanDau);
		printf("\nGia tri chan be nhat la %d", chanNhoNhat);
	}

	getchar();
	return 0;
}
