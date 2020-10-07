// Viet hàm tính tong các giá tri âm trong mang mot chieu các so thuc.
// B1 viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//B2 tinh tong cac gia tri am 	
//			khoi tao môt bien s gan = 0
//			duyet mang tu dau cho den cuoi mang neu co phan tu a[i] < 0 thi ==> s = s + a[i]
//			nguoc lai neu khong co bat ki phan tu a[i] nao < 0 thì thoat khoi vong lap va tra ve s.


#include<stdio.h>
#define MAX 100

void nhap (float a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nloi!");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf(" %f", &a[i]);
	}
}

void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf(" %4f", a[i]);
	}
}

float tongam(float a[], int n)
{
	float s = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			s = s + a[i];
		}
	}
	return s;
}
int main(){
	int n; 
	float a[MAX];
	
	nhap(a, n);
	xuat(a, n);
	
	float tong = tongam(a, n);
	printf("\nTong cac so am trong mang la %.3f", tong);
	
	getchar();
	return 0;

}

