// bai tap
viet chuong tr�nh nhap tu b�n ph�m hai so nguy�n duong a v� b. Sau d� hien thi ra m�n h�nh ket qua cua a^b
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
