// bai tap on tap cuoi hoc phan mon Cau Truc Du Lieu Va Giai Thuat
// bai 5 a xay dung thuat toan tim kiem phan tu lon nhat/nho nhat trong mo day so bat ki
//		 b xay dung thuat toan tim phan tu chan lon nhat/ le nho nhat trong day so bat ki
//		 c tim so lon thu 2 trong day so nguyen bat ki
//	a: Y tuong: viet ham tim max/Min trong day cac phan tu
//			B1: viet ham nhap/ xuat mang so nguyen bat ki ( define MAX .... se gioi han so luong phan tu trong mang)
//			B2: viet ham tim kiem Max/Min, gán bien max/Min ban dau bang 0, duyet tu dau mang toi cuoi mang neu phan tu nao lon hon Max/ Nho hon min
//						thi phan tu moi do se duoc gan là max/min moi, duyet tuan tu toi phan tu cuoi cua mang tim duoc thi tra ve gia tri do
//	b: Y tuong: viet ham tim max/min cong voi dieu kien là so chan thi chia het cho 2( %2 == 0) so le la khong chia het cho 2(%2!=0)


#include <stdio.h>
#define MAX 100
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
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
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    return min;
}
int maxChan(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (max < a[i] && a[i] %2 == 0){
            max = a[i];
        }
    }
    return max;
}
 
int minLe(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++){
        if (min > a[i] && a[i] %2 != 0){
            min = a[i];
        }
    }
    return min;
}

int main()
{
	int a[MAX];
	int n;
	printf("\nNhap n = ");
    scanf("%d", &n);
	nhap(a, n);
	xuat(a, n);
	int KQ = max(a,n);
	printf("gia tri lon nhat la %d", KQ);
	
	int kq = min(a,n);
	printf("\ngia tri nho nhat la %d", KQ);
	
//	int k = maxChan(a,n);
//	printf("\ngia tri chan lon nhat la %d", k);
	
//	int L = minLe(a,n);
//	printf("\ngia tri chan lon nhat la %d", L);
	
	return 0;
}
