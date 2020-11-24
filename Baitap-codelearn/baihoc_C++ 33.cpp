// bai tap
viet chuong trình nhap vào tu bàn phím 10 so nguyên và hien thi ra tong cua 10 so này.
ma tran

#include<iostream>

using namespace std;

int main() {
    int a[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++){
        sum += a[i];
    }
    cout << sum;
    return 0;
}
