#include<iostream>
#include<stdio.h>
#define MAX 8
using namespace std;
 
int A[MAX][MAX] = { 0 };//Khoi tao mang gi� tri 0
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
    ++dem;//Tang gi� tri buoc di
    A[x][y] = dem;//��nh dau d� di
    for (int i = 0; i < 8; i++)    {
        //Kiem tra xem m� d� di h�t b�n co chua
        if (dem == n * n) {
            cout << "Cac buoc di la: \n";
            xuat();
            exit(0);//k�t th�c chuong tr�nh
        }
        //N�u chua di h�t b�n co th� tao buoc di moi
        int u = x + X[i];//tao mot vi tr� x moi
        int v = y + Y[i];//tao m�t vi tr� y moi
        //N�u hop ly th� tien h�nh di chuy�n
        if (u >= 0 && u < n&&v >= 0 && v < n&& A[u][v] == 0)
            diChuyen(u, v);
    }
    //N�u kh�ng t�m duoc buoc di th� ta phai tra lai c�c gi� tri ban dau
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
    //N�u kh�ng t�m duoc buoc di th� se th�ng b�o
    cout << "Khong tim thay duong di.";
}
 
