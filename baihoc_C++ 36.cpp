// bai tap

Cho mot mang c�c so nguy�n n phan tu arr duoc nhap tu b�n ph�m. viet chuong tr�nh hien thi ra m�n h�nh nhung so chan trong mang.

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i ++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}
