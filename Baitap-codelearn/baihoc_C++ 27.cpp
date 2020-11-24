// bai tap
viet chuong trình nhap tu bàn phím hai so nguyên duong a và b. Sau dó hien thi ra màn hình ket qua cua a^b
#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int kq = 1;
    while (b > 0){
        kq *= a;
        b--;
    }
    cout << kq;
    return 0;
}
