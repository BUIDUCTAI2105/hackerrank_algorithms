// bai tap
Cho mot mang 2 chieu c�c so nguy�n n h�ng m cot a duoc nhap tu b�n ph�m.  viet chuong tr�nh t�nh tong c�c phan tu trong mang a.

#include<iostream>

using namespace std;

int main() {
    int n, m;
    int a[100][100];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
    }

    cout << sum;    
    return 0;
}
