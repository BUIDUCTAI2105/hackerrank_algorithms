// t�m s� ho�n thi�n nho nh�t trong mang 1 chi�u c�c s� nguy�n. N�u mang kh�ng c� s� ho�n thi�n th� tra v� -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemtrahoanthien
// 		�au ti�n  t�m c�c uoc so that su cua so a
//		Ta d�ng mot bien sum t�nh tong c�c uoc su th�t so cua a
//		Kiem tra neu sum == a  th� a ch�nh l� so ho�n thi�n
//
//B3: viet ham timvitrihoanthiendau, duyet tu dau mang len
//		 n�u c� phan tu n�o d�ng(kiemtrahoanthien(a[i]) == true) thi tra ve vi tri (return i)
//		nguoc lai th� tra ve gia tri -1
//B4: viet ham timHoanThienBeNhat, duy�t tu viTriHoanThienDau + 1
//		gan ham hoanThienNhoNhat = a[viTriHoanThienDau]
//		n�u kiemtrahoanthien(a[i]) == 1 v� a[i] < hoanThienNhoNhat th� g�n hoanThienNhoNhat = a[i]
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
int kiemtrahoanthien(int n)
{
	int i = 1;
	int S = 0;
	while(i < n)
	{
		if(n % i == 0)
		{
			S = S + i;
		}
		i++;
	}
	if(S == n)
		return 1;
	else
		return 0;
}
int timvitrisohoanthiendau(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(kiemtrahoanthien(a[i]) == 1)
		{
			return i;
		}
	}
	return -1;
}

int timHoanThienBeNhat(int a[], int n, int viTriHoanThienDau)
{

	int hoanThienNhoNhat = a[viTriHoanThienDau];

	for (int i = viTriHoanThienDau + 1; i < n; i++)
	{
		if (kiemtrahoanthien(a[i]) == 1 && a[i] < hoanThienNhoNhat)
		{
			hoanThienNhoNhat = a[i];
		}
	}
	return hoanThienNhoNhat;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);



	int vitrihoanthiendau = timvitrisohoanthiendau(a, n);
	
	
	if(vitrihoanthiendau == -1)
	{
		printf("\nmang khong co so hoan thien");
	}
	else
	{
		printf("\nVi tri hoan thien dau la %d", viTriHoanThienDau);
		int hoanThienNhoNhat = timHoanThienBeNhat(a, n, vviTriHoanThienDau);
		printf("\nso hoan thien be nhat la %d",hoanThienNhoNhat);
	}

	getchar();
	return 0;
}
