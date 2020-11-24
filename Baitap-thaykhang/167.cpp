//t�m gi� tri thoa di�u ki�n to�n chu s� le v� l� gi� tri lon nh�t thoa di�u ki�n �y trong mang 1 chi�u c�c s� nguy�n. N�u mang kh�ng c� gi� tri thoa di�u ki�n tr�n th� tra v� 0
//B1: viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//
//B2: viet ham kiemTraToanLe
//			su dung m�t v�ng lap do while d� ti�n hanh l�y cac chu s� nguy�n n ra, n�u gap m�t chu so chan thi tra v� gia tri false
//			nguoc lai thi tra ve true
//B3: x�y dung ham timSoToanChuSoLeLonNhat 
//			khoi tao gia tri max gan bang 0, sau do duyet tu dau mang toi cuoi n�u c� gia tri nao thoa dk a[i] > max v� kiemTraToanLe(a[i])
//			thi gan gia tri a[i] cho max k�t thu ham thi tra v� gia tri max
//			nguoc lai tra v� 0 n�u mang ko co gia tri toan le

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

