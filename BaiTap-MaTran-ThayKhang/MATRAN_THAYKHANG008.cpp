viet ham dinh nghia ma tran cac so thuc tang dan 
#include<iostream>

using namespace std;

void NhapMaTran(float a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf_s("%d", &a[i][j]);
      }
}
 
void XuatMaTran(float a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
void SapTang(float a[][100], int m, int n)
{
	for(int i = 0; i <= m*n-2; i++)
      for(int j = i + 1; j <= m*n-1; j++)
      		if(a[i/n][i%n] > a[j/n][j%n]){
			  	float t = a[i/n][i%n];
			  	a[i/n][i%n] = a[j/n][j%n];
			  	 a[j/n][j%n] = t;
			  }
}
	
int main(){
    float a[100][100];
    int m,n;
    printf("nhap so hang n = "); scanf_s("%d",&n);
    printf("nhap so cot m = "); scanf_s("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    SapTang(a, m, n);
		getchar();
}
