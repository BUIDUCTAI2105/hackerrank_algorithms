// Bài t?p
viet chuong trình nhap vào tu bàn phím so nguyên a và b. Sau dó hien thi ra màn hình tong các so tu a toi b:
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
