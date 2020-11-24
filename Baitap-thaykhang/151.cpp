// t�m s� nguy�n t� lon nh�t trong mang 1 chi�u c�c s� nguy�n. N�u mang kh�ng c� s� nguy�n t� th� tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: nhap vao m�t s� n kiem tra xem so nhap vao c� phai l� so nguyen to hay kh�ng
//			Kiem tra neu n < 2 th� ket luan n kh�ng phai l� so nguy�n to return false
//			xet tu 2 den can bac 2  cua n
//			neu n chia het cho i thi tra ve false			
//			nguoc lai return true
//B3: viet ham timSoNguyenToDau, duy�t tu d�u mang l�n
// 			neu c� s� n�o kiemTraSoNguyenTo = true th� in ra s� d�
//			n�u mang kh�ng c� s� nguyen thi tra v� -1
//B4: viet ham timimSoNguyenToLonNhat, duy�t tu vitringuyentodau + 1 d�n cuoi 
//			gan ham nguyenToLonNhat = a[vitringuyentodau]
//			n�u kiemTraNguyenTo(a[i]) == 1 v�  a[i] > nguyenToLonNhat th� g�n nguyenToLonNhat = a[i]
//			nguoc lai n�u kh�ng c� th� tho�t khoi v�ng lap

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
int kiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int timViTriSoNguyenToDau(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(kiemTraNguyenTo(a[i]) == 1)
		{
			return i;
		}
	}
	return 0;
}

int timSoNguyenToLonNhat(int a[], int n, int vitringuyentodau)
{
	int nguyenToLonNhat = a[vitringuyentodau];
	for (int i = vitringuyentodau + 1; i < n; i++)
	{
		if (kiemTraNguyenTo(a[i]) == 1 && a[i] > nguyenToLonNhat)
		{
			nguyenToLonNhat = a[i];
		}
	}
	return nguyenToLonNhat;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int vitringuyentodau = timViTriSoNguyenToDau(a, n);

	if(vitringuyentodau == 0)
	{
		printf("\nMang khong co so nguyen to");
	}
	else
	{
		int nguyenToLonNhat = timSoNguyenToLonNhat(a, n, vitringuyentodau);
		printf("\nSo nguyen to lon nhat la %d", nguyenToLonNhat);
	}

	getchar();
	return 0;
}
