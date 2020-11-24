// tìm sô nguyên tô lon nhât trong mang 1 chiêu các sô nguyên. Nêu mang không có sô nguyên tô thì tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: nhap vao môt sô n kiem tra xem so nhap vao có phai là so nguyen to hay không
//			Kiem tra neu n < 2 thì ket luan n không phai là so nguyên to return false
//			xet tu 2 den can bac 2  cua n
//			neu n chia het cho i thi tra ve false			
//			nguoc lai return true
//B3: viet ham timSoNguyenToDau, duyêt tu dâu mang lên
// 			neu có sô nào kiemTraSoNguyenTo = true thì in ra sô dó
//			nêu mang không có sô nguyen thi tra vê -1
//B4: viet ham timimSoNguyenToLonNhat, duyêt tu vitringuyentodau + 1 dên cuoi 
//			gan ham nguyenToLonNhat = a[vitringuyentodau]
//			nêu kiemTraNguyenTo(a[i]) == 1 và  a[i] > nguyenToLonNhat thì gán nguyenToLonNhat = a[i]
//			nguoc lai nêu không có thì thoát khoi vòng lap

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
