// Bai toan quan hau: cho mot ban co hinh vuong kich thuoc va quan hau. hay tim cach dat quan hau tren ban co sao cho khong co 2 quan hau nao c� the an duoc nhau
// B1: ki�m tra c�ch dat c� thoa m�n kh�ng
//		N�u ki�m tra h�t c�c truong hop van kh�ng sai th� tra v� true
//B2: vi�t ham xuat ra ket qua, duyet tu dau den cuoi
//B3: thu dat quan hau vao cac cot tu 1 d�n n
//			n�u cach dat thoa man thi luu vi tri do lai
//			n�u dat xong quan hau thu n thi xuat ra ket qua thoa man


#include<stdio.h>
#include<math.h>
int a[20];
bool Ok(int x2,int y2){
    
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    
    return true;
}
 
void Xuat(int n){
   
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        if(Ok(i,j)){
            a[i] = j;
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 8;
    Try(1,n);
    return 0;
}
