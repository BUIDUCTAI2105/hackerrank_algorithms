//  tìm giá tri duong nho nhat trong mang 1 chieu các so thuc. Neu mang không có giá tri duong thì se tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viem ham timduongdautien 
//			duyet các phân tu tu dau mang toi cuoi mang, neu co phan tu nào (a[i] > 0) thi tra vê gia tri do (return a[i])
// 			neu khong có thì tra vê gia tri -1
//
//B3: viet ham tim timgiatriduongnhonhat
//			neu duongNhoNhat == -1 tra vê gia tri -1
//			duyet các phân tu tu dau mang toi cuoi mang, neu co phan tu nào (a[i] > 0) và a[i] < duongNhoNhat thi duongNhoNhat = a[i]
//			nguoc lai neu khong co thi thoat khoi vòng lap 

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

float timduongdautien(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}

float timgiatriduongnhonhat(float a[], int n)
{
	float duongNhoNhat = timduongdautien(a, n);
	if(duongNhoNhat == -1){
		
		return -1;
		}
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0 && a[i] < duongNhoNhat)
		{
			duongNhoNhat = a[i];
		}
	}
	return duongNhoNhat;
}
int main()
{
	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);

	float duongNhoNhat = timgiatriduongnhonhat(a, n);
	printf("\nGia tri duong nho nhat la %f", duongNhoNhat);

	getchar();
	return 0;
}
