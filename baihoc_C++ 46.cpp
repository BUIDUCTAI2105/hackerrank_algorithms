// bai tap
Cho x�u s v� k� tu c duoc nhap tu b�n ph�m. viet chuong tr�nh in ra so lon xuat hien cua k� tu c trong x�u s.

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
