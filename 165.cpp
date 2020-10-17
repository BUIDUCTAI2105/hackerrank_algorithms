// Cho mang 1 chiêu các sô nguyên. Hãy tìm giá tri dâu tiên có chu sô dâu tiên là chu so le
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2 viêt ham chuSoDau ( dê có dk ràng buôc chu sô dâu )
//			khoi tao biên dv gán bang 0 
//			dùng vong lap While dê xu ly dk vòng lap kêt thúc khi n < 10
//			nêu n chia hêt cho 2 thi tra vê gia tri 0, nguoc lai thi tra vê gia tri 1
//B3: viêt ham timChuSoDauLe, duyêt tu dâu mang toi cuoi
//			nêu gia tri cua chuSoDau = 1 thì tra vê gia tri a[i] 
//			nguoc lai tra vê 0

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
