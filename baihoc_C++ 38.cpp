// bai tap
Cho mot mang c�c so nguy�n n phan tu a. viet chuong tr�nh t�nh tong c�c so le lon hon 0 trong mang.

#include<iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if(a[i] % 2 != 0 && a[i] > 0){
            sum += a[i];
        }
    }
    cout << sum;
    return 0;
}
