// bai tap
viet chuong tr�nh nhap v�o tu b�n ph�m 10 so nguy�n v� hien thi ra tong cua 10 so n�y.
ma tran

#include<iostream>

using namespace std;

int main() {
    int a[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++){
        sum += a[i];
    }
    cout << sum;
    return 0;
}
