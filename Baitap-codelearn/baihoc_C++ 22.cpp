// B�i tap
viet chuong tr�nh nhap v�o tu b�n ph�m so nguy�n n v� thuc hien hien thi ra tong c�c so le tu 0 toi n.

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
