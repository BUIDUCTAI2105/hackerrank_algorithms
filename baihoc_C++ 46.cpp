// bai tap
Cho xâu s và ký tu c duoc nhap tu bàn phím. viet chuong trình in ra so lon xuat hien cua ký tu c trong xâu s.

#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    cout << count;
    return 0;
}
