//Cho mang 1 chi�u c�c s� nguy�n. H�y vi�t h�m t�m s� nguy�n t� nho nhat lon hon moi gi� tri c� trong mang
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: nhap vao m�t s� n kiem tra xem so nhap vao c� phai l� so nguyen to hay kh�ng
//			Kiem tra neu n < 2 th� ket luan n kh�ng phai l� so nguy�n to return false
//			xet tu 2 den can bac 2  cua n
//			neu n chia het cho i thi tra ve false			
//			nguoc lai return true
//B3: viet ham timSoLonNhat,
//			su dung bien Max = a[0], duy�t tu dau mang toi cuoi 
//			n�u thoa max = (max > a[i]) ? max : a[i] thi tra v� Max
//B4: viet ham timNguyenToNhoNhatLonHonMoiGiaTriTrongMang
//			su dung bien Max = timSoLonNhat, soCanTim = Max + 1
//			n�u max < soCanTim ===> kiemtranguyento(soCanTim) = 1 th� dung
//			nguoc lai khong c� thi tra v� soCanTim

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
bool kiemtranguyento(int n) {
    
	if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
            return false;
    return true;
}
int timSoLonNhat(int a[], int n)
{
   int max = a[0];
   for(int i = 1; i < n; i++)
      max = (max > a[i]) ? max : a[i];
   return max;
}

int timNguyenToNhoNhatLonHonMoiGiaTriTrongMang(int a[], int n)
{
	int max = timSoLonNhat(a, n);
	int soCanTim = max + 1;
	for(soCanTim = max + 1;; soCanTim++)
	{
		if(max < soCanTim)
		{
			if(kiemtranguyento(soCanTim) == 1)
			break;
		}
	}
	return soCanTim;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int KQ = timNguyenToNhoNhatLonHonMoiGiaTriTrongMang(a, n);
	printf("\nKet qua la %d", KQ);

	getchar();
	return 0;
}
