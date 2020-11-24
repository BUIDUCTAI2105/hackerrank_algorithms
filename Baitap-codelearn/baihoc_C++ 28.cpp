// bai tap
viet chuong trình nhap tu bàn phím hai so nguyên a và b. Sau dó hien thi ra màn hình các so tu a toi b mà chia het cho ca 3 và 5.

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
