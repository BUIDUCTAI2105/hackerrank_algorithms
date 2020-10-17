//Cho mang 1 chi�u c�c s� nguy�n. H�y vi�t h�m t�m gi� tri d�u ti�n trong mang c� dang 2^k. N�u mang kh�ng c� gi� tri dang 2k th� h�m se tra v� 0
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraDang2k
//			n�u n be hon hoac bang 1 thi tra v� gia tri 1
//			d�ng vong lap While voi dk n lon hon 1 , n�u n kh�ng chia h�t cho 2 thi tra v� 0
//			c�n lai la n = n/2
//B3: vi�t ham timGiaTri2KDauTien, duy�t tu dau mang toi cuoi mang
//			n�u kiemTraDang2k co gia tri bang 1 thi tra v� gia tri d�
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

int kiemTraDang2K(int n)
{
	if (n <= 1)
      return 1;
	while(n > 1){
        if(n % 2 != 0)   
            return 0;
        n /= 2;
    }
    return 1;
}

int timGiaTri2KDauTien(int a[], int n)
{
	for(int i = 0; i < n; i++){
		if(kiemTraDang2K(a[i]) == 1){
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
	
	int KQ = timGiaTri2KDauTien(a, n);
	printf("\nGia tri 2k dau tien la %d", KQ);
	 
	getchar();
	return 0;
}

