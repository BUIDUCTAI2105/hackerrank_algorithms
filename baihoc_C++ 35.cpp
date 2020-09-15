// bai tap
Cho moat mang các so nguyên n phan tu arr duoc nhap tu bàn phím. viet chuong trình hien thi ra tong cua phan tu dau tiên và cuoi cùng trong mang arr

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
