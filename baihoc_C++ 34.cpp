// bai tap

Cho mot mang các so nguyên n phan tu arr duoc nhap tu bàn phím. viet chuong trình hien thi ra phan tu lon nhat trong mang.

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int maxValue = a[0];
    for (int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    cout << maxValue;
    return 0;
}
