// Cho mang 1 chi�u c�c s� nguy�n. H�y vi�t h�m t�m gi� tri lon nh�t trong mang c� dang 5^k. N�u mang khong t�n tai gi� tri 5^k th� h�m se tra v� 0
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraDang5k
//			n�u n be hon hoac bang 1 thi tra v� gia tri 1
//			d�ng vong lap While voi dk n lon hon 1 , n�u n kh�ng chia h�t cho 5 thi tra v� 0
//			c�n lai la n = n/5
//B3: vi�t ham timGiaTri5kLonNhat 
//			khoi tao gia tri max gan bang 0 v� dem bang 0, sau do duyet tu dau mang toi cuoi
//			n�u c� gia tri n�o thoa kiemTraDang5k == 1 th� g�n gia tri a[i] cho max v� bi�n dem tang l�n 1 
//				n�u dem = 0 th� tra v� gia tri 0, sau do duyet ti�p tu dau mang toi cuoi
//				n�u	kiemTraDang5k == 1 v� max = (max > a[i]) ? max : a[i] thi tra v� max

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
int kiemTraDang5K(int n)
{
	if (n <= 1){
      return 1;
      }
	while(n > 1)  
    {
        if(n % 5 != 0) 
            return 0;
        n /= 5;
    }
    return 1;
}

int timGiaTri5kLonNhat(int a[], int n)
{
	int max;
	int dem = 0;
	for(int i = 0; i < n; i++){
       if (kiemTraDang5K(a[i]) == 1){
           max = a[i];
           dem ++;
           break;
       }
   }
   if (dem == 0){
       return 0;
       }
   for(int i = 0; i < n; i++){
       if (kiemTraDang5K(a[i]) == 1)
          max = (max > a[i]) ? max : a[i];
          }
   return max;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
	
	int KQ = timGiaTri5kLonNhat(a, n);
	printf("\nGia tri 5k lon nhat la %d", KQ);
	 
	getchar();
	return 0;
} 		
