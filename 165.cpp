// Cho mang 1 chi�u c�c s� nguy�n. H�y t�m gi� tri d�u ti�n c� chu s� d�u ti�n l� chu so le
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2 vi�t ham chuSoDau ( d� c� dk r�ng bu�c chu s� d�u )
//			khoi tao bi�n dv g�n bang 0 
//			d�ng vong lap While d� xu ly dk v�ng lap k�t th�c khi n < 10
//			n�u n chia h�t cho 2 thi tra v� gia tri 0, nguoc lai thi tra v� gia tri 1
//B3: vi�t ham timChuSoDauLe, duy�t tu d�u mang toi cuoi
//			n�u gia tri cua chuSoDau = 1 th� tra v� gia tri a[i] 
//			nguoc lai tra v� 0

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
			printf("\nSai roi kiem tra lai !");
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

int chuSoDau( int n)
{
	int dv;
   while (n >= 10){
       dv = n % 10;
       n = n / 10;
   }
   if (n % 2 == 0){
       return 0;
       }
   return 1;
}

int timChuSoDauLe(int a[], int n)
{
	for(int i = 0; i < n; i++){
       if (chuSoDau(a[i]) == 1){
           return a[i];
	   }
	}
   return 0;
}

int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int leDau = timChuSoDauLe(a, n);
	printf("\nKet qua la %d", leDau);
	
	getchar();
	return 0;
}
