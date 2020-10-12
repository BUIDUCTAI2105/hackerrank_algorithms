// T�m s� ho�n thi�n cu�i c�ng trong mang 1 chi�u c�c s� nguy�n. N�u mang kh�ng c� s� ho�n thien th� tri ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemtrahoanthien
// 		�au ti�n  t�m c�c uoc so that su cua so a
//		Ta d�ng mot bien sum t�nh tong c�c uoc su th�t so cua a
//		Kiem tra neu sum == a  th� a ch�nh l� so ho�n thi�n
//
//B3: viet h�m timSoHoanThienCuoi, duy�t tu cuoi mang l�n
//		n�u c� s� n�o kiemtrahoanthien = true th� in ra s� d�
//		n�u mang kh�ng c� s� nguyen thi tra v� -1

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

bool kiemtrahoanthien(int n)
{
 	int sum = 0;
    for(int i=1;i<=n/2;i++){
        
		if(n%i==0) 
            
			sum+=i;
    }
    if(sum==n){ 
		
		return true;
	} 
    return false;
}

int timSoHoanThienCuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(kiemtrahoanthien(a[i]) == true)
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

	int sohoanthiencuoi = timSoHoanThienCuoi(a, n);
	printf("\nSo hoan thien cuoi la %d", sohoanthiencuoi);

	getchar();
	return 0;
}
