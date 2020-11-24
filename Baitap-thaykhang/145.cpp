// Tìm so hoàn thien dau tiên trong mang 1 chieu so nguyên. Neu mang không có so hoàn thien thì tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemtrahoanthien
// 		Ðau tiên  tìm các uoc so that su cua so a
//		Ta dùng mot bien sum tính tong các uoc su thât so cua a
//		Kiem tra neu sum == a  thì a chính là so hoàn thiên
//
//B3: viet ham timsohoanthiendau, duyêt tu dâu mang dên cuôi mang
//		 nêu có phan tu nào dúng(kiemtrahoanthien(a[i]) == true) thi tra ve vi tri (return i)
//		nguoc lai thì tra ve gia tri -1

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

int timsohoanthiendau(int a[], int n)
{
	for(int i = 0; i < n; i++)
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

	int sohoanthiendau = timsohoanthiendau(a, n);
	printf("\nSo hoan thien dau la %d", sohoanthiendau);

	getchar();
	return 0;
}
