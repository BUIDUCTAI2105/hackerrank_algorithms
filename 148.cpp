// T�m s� nguy�n t� cu�i c�ng trong mang 1 chi�u c�c s� nguy�n. N�u mang kh�ng c� s� nguy�n t� th� tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: nhap vao m�t s� n kiem tra xem so nhap vao c� phai l� so nguyen to hay kh�ng
//			Kiem tra neu n < 2 th� ket luan n kh�ng phai l� so nguy�n to return false
//			xet tu 2 den can bac 2  cua n
//			neu n chia het cho i thi tra ve false			
//			nguoc lai return true	
//B3: viet ham timSoNguyenToCuoi, duy�t tu cuoi mang l�n
// 			neu c� s� n�o kiemTraSoNguyenTo = true th� in ra s� d�
//			n�u mang kh�ng c� s� nguyen thi tra v� -1

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
int timSoNguyenToCuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--){
		if(kiemtranguyento(a[i]) == true)
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

	nhap(a, n);
	xuat(a, n);

	int nguyentocuoi = timSoNguyenToCuoi(a, n);
	printf("\nSo nguyen to cuoi cung la %d", nguyentocuoi);

	getchar();
	return 0;
}	
	
	
