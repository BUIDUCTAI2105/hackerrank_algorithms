// Cho mang 1 chiêu các sô nguyên. Hãy viêt hàm tìm giá tri lon nhât trong mang có dang 5^k. Nêu mang khong tôn tai giá tri 5^k thì hàm se tra vê 0
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraDang5k
//			nêu n be hon hoac bang 1 thi tra vê gia tri 1
//			dùng vong lap While voi dk n lon hon 1 , nêu n không chia hêt cho 5 thi tra vê 0
//			còn lai la n = n/5
//B3: viêt ham timGiaTri5kLonNhat 
//			khoi tao gia tri max gan bang 0 và dem bang 0, sau do duyet tu dau mang toi cuoi
//			nêu có gia tri nào thoa kiemTraDang5k == 1 thì gán gia tri a[i] cho max và biên dem tang lên 1 
//				nêu dem = 0 thì tra vê gia tri 0, sau do duyet tiêp tu dau mang toi cuoi
//				nêu	kiemTraDang5k == 1 và max = (max > a[i]) ? max : a[i] thi tra vê max

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
