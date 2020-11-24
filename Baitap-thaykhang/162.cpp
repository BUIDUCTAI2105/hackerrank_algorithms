// Cho mang 1 chi�u c�c s� thuc. H�y vi�t h�m t�m m�t vi tr� trong mang thoa 2 di�u ki�n: c� 2 gi� tri l�n c�n v� gi� tri tai d� bang t�ch 2 gi� tri l�n c�n.
// N�u mang kh�ng t�n tai gi� tri nhu v�y th� tra v� gi� tri -1
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham timvitrithoaDK, duyet tu phan tu thu nha i = 1 toi vi tri k� cu�i
//			n�u a[i] == a[i - 1] * a[i + 1] th� tra v� i , n�u kh�ng thoa DK th� tra v� -1

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
