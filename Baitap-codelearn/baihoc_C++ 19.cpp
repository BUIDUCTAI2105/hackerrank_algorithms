// Bài tap
 viet chuong trình nhap tu bàn phím so nguyên a và b. Sau dó hien thi ra các so tu a toi b:

#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        cout << i << " ";
    }
    return 0;
}
