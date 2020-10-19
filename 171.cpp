//Cho mang 1 chi�u c�c s� nguy�n. H�y vi�t h�m t�m uoc chung lon nhat cua t�t ca c�c ph�n tu trong mang
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timSoNhoNhat
//			su dung ham min bang voi gia tri dau tien
//			duy�t tu gia tri tiep theo toi cuoi mang
//			n�u c� gia tri nao < min, thi min bang vs gia tri d�
//			nguoc lai n�u khong co tra v� min
//B3: viet ham kiemTraUocSoChung
//			n�u co gia tri nao kh�ng chia h�t cho uocSo thi tra ve false
//			nguoc lai tra v� true
//B4: viet ham timUocSoLonNhatCuaMang
//			n�u ham kiemTraUocSoChung(a, n, uocSo) = true thi tra v� uocSo
//			nguoc lai tra v� 1

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
int timSoNhoNhat(int a[], int n)
{
	int min = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];  
		}
	}
	return min;
}


bool kiemTraUocSoChung(int a[], int n, int uocSo)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % uocSo != 0)
		{
			return false;
		}
	}
	return true;
}

int timUocSoLonNhatCuaMang(int a[], int n){
	for(int uocSo = timSoNhoNhat(a, n); uocSo >= 1; uocSo--)  
	{
		if(kiemTraUocSoChung(a, n, uocSo) == true)
		{
			return uocSo;
		}
	}
	return 1;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int KQ = timUocSoLonNhatCuaMang(a, n);
	printf("\nUoc So chung lon nhat cua mang la %d", KQ);

	getchar();
	return 0;
}
