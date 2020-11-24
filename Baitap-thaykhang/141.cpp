//  tìm vi trí giá tri duong nho nhat trong mang 1 chieu các so thuc. Neu mang không có giá tri duong thì tra ve -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timvitriduongnhonhat duyet tu dâu mang toi cuoi mang
//			khoi tao biên i = 0; dem = 0; min =0;
//			kiem tra xem có duong hay không 
//			và dung bien dem dê dem so luong so duong
//			biên i là vi trí min (nêu tim duoc thi min = i )
//			nêu không có giá tri duong thi tra ve -1

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
int timvitriduongnhonhat(float a[], int n)
{
	int i;
    int min;
    int dem = 0 ;
    for (i = 0; i < n; i++)
    {
        if(a[i] > 0)  
        {
            dem++;     
            min = i;   
        }
    }  
    if (dem == 0)     
        return -1;
    for (i = i + 1; i < n; i++)
    {
        if((a[i] > 0) && (a[i] < a[min]))
        {
           min = i;
        }
    }
    return min;
}
int main()
{
	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);

	int vitriduongnhonhat = timvitriduongnhonhat(a, n);
	printf("\nVi tri duong nho nhat la %d", vitriduongnhonhat);

	getchar();
	return 0;
}

