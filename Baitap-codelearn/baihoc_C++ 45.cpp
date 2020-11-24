// bai tap
Cho xâu s và so nguyên k duoc nhap tu bàn phím. viet chuong trình in ra màn hình ký tu thu k trong xâu s.

#include<iostream>

using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    cout << s[k - 1];
    return 0;
}
