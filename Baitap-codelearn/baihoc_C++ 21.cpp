// B�i t?p
viet chuong tr�nh nhap v�o tu b�n ph�m so nguy�n a v� b. Sau d� hien thi ra m�n h�nh tong c�c so tu a toi b:
#include<iostream>

using namespace std;

int main() {
    int a, b;
    int sum = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}
