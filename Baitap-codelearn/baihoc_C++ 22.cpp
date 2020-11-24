// Bài tap
viet chuong trình nhap vào tu bàn phím so nguyên n và thuc hien hien thi ra tong các so le tu 0 toi n.

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
