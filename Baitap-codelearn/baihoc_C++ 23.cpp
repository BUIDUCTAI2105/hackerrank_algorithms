// B�i tap
viet chuong tr�nh nhap tu b�n ph�m so nguy�n n v� hien thi ra m�n h�nh n! (n giai thua).

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
