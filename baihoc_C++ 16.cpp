// B�i tap
Viet chuong tr�nh nhap tu b�n ph�m 3 so nguy�n a, b, c. Sau d� h�y kiem tra xem a, b, c c� tro th�nh mot d�y so tang dan hoac giam dan hay kh�ng.

Neu a = b v� b = c th� chi hien thi:

increasing
Neu a = b v� b = c th� hien th:

decreasing
Nguoc lai, neu kh�ng v�o 1 trong hai truong hop tr�n th� hien thi:

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
