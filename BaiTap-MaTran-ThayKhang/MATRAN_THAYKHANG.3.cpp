// ma tran thay khang
viet ham kiem tra trong ma tran so nguyen có ton tai gia tri chan nho hon 2004 hay khong
 
#include<iostream>

using namespace std;

void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf_s("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
int TonTaiChan(int a[][100], int m, int n)
{
	int flag = 0;
	 for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      		if(a[i][j] % 2 == 0 && a[i][j] < 2004)
      				flag = 1;
	return flag;				  	
}
int main(){
    int a[100][100];
    int m,n;
    printf("nhap so hang n = "); scanf_s("%d",&n);
    printf("nhap so cot m = "); scanf_s("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    TonTaiChan(a, m, n);
		getchar();
}
 
