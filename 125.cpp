// Viet hàm dem so luong so nguyên to nho hon 100 trong mang

//B1  nhap vao môt sô n kiem tra xem so nhap vao có phai là so nguyen to hay không
//				Kiem tra neu n < 2 thì ket luan n không phai là so nguyên to return false
//				xet tu 2 den can bac 2  cua n
//				neu n chia het cho i thi tra ve false			
//				nguoc lai return true	
//B2 viet ham nhap va xuat mang  1 chieu a[i]
// 			nhap vao n neu n <= 0 hoac n > MAX ( MAX 100 ) thi bi loi va nhap lai
//B3 viet ham dem so nguyen to 
//		gán bien dem = 0
//		lap tu 0 toi n, neu kiem tra do la so nguyen to va nho hon 100 thì dem so do va bien dem tang len cho den phan tu ke cuoi cua mang thi dung
//		neu khong phai so nguyen to thi ket thuc vong lap 

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

bool kiemtranguyento(int n) {
    
	if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
            return false;
    return true;
}

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nloi!");
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
int demnguyento(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemtranguyento(a[i]) == true && a[i] < 100)
		{
			dem++;
		}
	}
	return dem;
}

int main()
{
  
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

	int dem = demnguyento(a, n);
	printf("\nSo luong cac so nguyen to la: %d", dem);
	
	getch();
	return 0;
}
