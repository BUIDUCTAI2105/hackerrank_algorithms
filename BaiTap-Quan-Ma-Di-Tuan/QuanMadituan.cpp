#include<iostream>
#include<stdio.h>
#define MAX 8
using namespace std;
 
int A[MAX][MAX] = { 0 };//Khoi tao mang giá tri 0
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int dem = 0;//So buoc di
int n;
 
void xuat() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%2d ", A[i][j]);
        cout << endl;
    }
    cout << endl;
}
 
void diChuyen(int x, int y) {
    ++dem;//Tang giá tri buoc di
    A[x][y] = dem;//Ðánh dau dã di
    for (int i = 0; i < 8; i++)    {
        //Kiem tra xem mã dã di hêt bàn co chua
        if (dem == n * n) {
            cout << "Cac buoc di la: \n";
            xuat();
            exit(0);//kêt thúc chuong trình
        }
        //Nêu chua di hêt bàn co thì tao buoc di moi
        int u = x + X[i];//tao mot vi trí x moi
        int v = y + Y[i];//tao môt vi trí y moi
        //Nêu hop ly thì tien hành di chuyên
        if (u >= 0 && u < n&&v >= 0 && v < n&& A[u][v] == 0)
            diChuyen(u, v);
    }
    //Nêu không tìm duoc buoc di thì ta phai tra lai các giá tri ban dau
    --dem;
    A[x][y] = 0;
}
int main() {
    cout << "Nhap n: ";
    cin >> n;
    int a, b;
    cout << "Nhap vi tri ban dau.\nx: ";
    cin>>a;
    cout << "y: ";
    cin >> b;
    diChuyen(a, b);
    //Nêu không tìm duoc buoc di thì se thông báo
    cout << "Khong tim thay duong di.";
}
 
