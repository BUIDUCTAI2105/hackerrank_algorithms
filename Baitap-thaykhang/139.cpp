// Tìm vi trí so hoàn thien cuoi cùng trong mang 1 chieu các so nguyên. Neu mang không có so hoàn thien thì tra ve giá tri  -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemtrahoanthien
// 		Ðau tiên  tìm các uoc so that su cua so a
//		Ta dùng mot bien sum tính tong các uoc su thât so cua a
//		Kiem tra neu sum == a  thì a chính là so hoàn thiên
//
//B3: viet ham timvitrihoanthiencuoi, duyet tu phan cuoi mang len
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

int timvitrihoanthiencuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(kiemtrahoanthien(a[i]) == true)
		{
			return i;
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

	int vitrihoanthiencuoi = timvitrihoanthiencuoi(a, n);
	printf("\nVi tri hoan thien cuoi la %d", vitrihoanthiencuoi);

	getchar();
	return 0;
}
