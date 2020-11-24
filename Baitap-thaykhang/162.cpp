// Cho mang 1 chiêu các sô thuc. Hãy viêt hàm tìm môt vi trí trong mang thoa 2 diêu kiên: có 2 giá tri lân cân và giá tri tai dó bang tích 2 giá tri lân cân.
// Nêu mang không tôn tai giá tri nhu vây thì tra vê giá tri -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timvitrithoaDK, duyet tu phan tu thu nha i = 1 toi vi tri kê cuôi
//			nêu a[i] == a[i - 1] * a[i + 1] thì tra vê i , nêu không thoa DK thì tra vê -1

#include<stdio.h>
#include<math.h>
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
		scanf("%f", &a[i]);
	}
}

void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%8.3f", a[i]);
	}
}

float timvitrithoaDK(float a[], int n)
{
	for(int i = 1; i < n - 1; i++){
		if(a[i] == a[i - 1] * a[i + 1]){
			return i;
		}
	}
	return -1;
}

int main()
{
	int n;
	float a[MAX];
	int x, y;

	nhap(a, n);
	xuat(a, n);

	float vitri = timvitrithoaDK(a, n);
	printf("\nVi tri thoa dieu kien: co gia tri lan can \n va gia tri tai do = tich 2 gia tri lan can: %f", vitri);

	getchar();
	return 0;
}
