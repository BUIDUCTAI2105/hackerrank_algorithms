// Bài tap
viet chuong trình nhap tu bàn phím so nguyên n và hien thi ra màn hình n! (n giai thua).

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    cout << factorial;
    return 0;
}
