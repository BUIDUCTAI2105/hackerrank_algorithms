//tìm giá tri thoa diêu kiên toàn chu sô le và là giá tri lon nhât thoa diêu kiên ây trong mang 1 chiêu các sô nguyên. Nêu mang không có giá tri thoa diêu kiên trên thì tra vê 0
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraToanLe
//			su dung môt vòng lap do while dê tiên hanh lây cac chu sô nguyên n ra, nêu gap môt chu so chan thi tra vê gia tri false
//			nguoc lai thi tra ve true
//B3: xây dung ham timSoToanChuSoLeLonNhat 
//			khoi tao gia tri max gan bang 0, sau do duyet tu dau mang toi cuoi nêu có gia tri nao thoa dk a[i] > max và kiemTraToanLe(a[i])
//			thi gan gia tri a[i] cho max kêt thu ham thi tra vê gia tri max
//			nguoc lai tra vê 0 nêu mang ko co gia tri toan le

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
bool kiemTraToanLe(int n) {
    int t;
    do {
        t = n % 10;
        n /= 10;
        if (t % 2 == 0){
            return false;
        }
    } while (n > 0);
    return true;
}
int timSoToanChuSoLeLonNhat (int a[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max && kiemTraToanLe(a[i]))
            max = a[i];
    }
    return max;
}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int KQ = timSoToanChuSoLeLonNhat(a, n);
	printf("\nKet qua la %d", KQ);


	getchar();
	return 0;
}

