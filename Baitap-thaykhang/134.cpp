// viet ham tim gia tri lon nhat trong mang 1 chieu sô thuc
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham tim gia tri lon nhat 
// 			khai bao biên M = a[0]
//			duyet các phân tu tu dau mang toi cuoi mang, nêu có phan tu nào > MAX (a[i] > M) ,thi phan tu MAX = a[i]
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

float  giaTriLonNhat(float a[], int n){
	
	float M = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > M){
		
			M = a[i];
		}
	}
	
	return M;
}
int main(){
	int n; 
	float a[MAX];
	
	nhap(a, n);
	xuat(a, n);
	
	float M = giaTriLonNhat(a, n);
	printf("\n phan tu lon nhat trong mang la %f: ", M);
	
	getchar();
	return 0;

}
