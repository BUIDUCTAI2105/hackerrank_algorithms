// bai tap
Cho moat mang c�c so nguy�n n phan tu arr duoc nhap tu b�n ph�m. viet chuong tr�nh hien thi ra tong cua phan tu dau ti�n v� cuoi c�ng trong mang arr

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << arr[0] + arr[n - 1];
    return 0;
}
