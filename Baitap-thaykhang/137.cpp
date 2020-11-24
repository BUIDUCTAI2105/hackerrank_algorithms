//Tìm 1 vi trí mà giá tri tai vi trí dó là giá tri nho nhat trong mang 1 chieu các so thuc
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timvitrinhonhat, khoi tao môt biên t = 0
//			duyet các phân tu tu dau mang toi cuoi mang, nêu có phan tu nào a[i] < a[t] thi t = i
// 			neu không có phân tu nào thi thoat khoi vong lap 

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
			printf("\nloi roi kiem tra lai!");
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
int timvitrinhonhat(float a[], int n)
{
	int t = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < a[t]){
			
			t = i;
		}
	}
	
	return t;
}
int main()
{
	int n;
	float a[MAX];
	nhap(a, n);
	xuat(a, n);

	int t = timvitrinhonhat(a, n);

	printf("\nVi tri chua phan tu nho nhat la %d", t);

	getchar();
	return 0;
}
