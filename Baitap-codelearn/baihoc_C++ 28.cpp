// bai tap
viet chuong tr�nh nhap tu b�n ph�m hai so nguy�n a v� b. Sau d� hien thi ra m�n h�nh c�c so tu a toi b m� chia het cho ca 3 v� 5.

#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a <= b){
        if(a % 3 == 0 && a % 5 ==0){
            cout << a << " ";
        }
        a++;
    }
    return 0;
}
