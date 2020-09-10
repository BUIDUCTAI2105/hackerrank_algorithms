// Bài tap
Viet chuong trình nhap tu bàn phím 3 so nguyên a, b, c. Sau dó hãy kiem tra xem a, b, c có tro thành mot dãy so tang dan hoac giam dan hay không.

Neu a = b và b = c thì chi hien thi:

increasing
Neu a = b và b = c thì hien th:

decreasing
Nguoc lai, neu không vào 1 trong hai truong hop trên thì hien thi:

neither increasing nor decreasing order

#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c) {
        cout << "increasing";
    } else if (a >= b && b >= c) {
        cout << "decreasing";
    } else {
        cout << "neither increasing nor decreasing order";
    }
    return 0;
}
