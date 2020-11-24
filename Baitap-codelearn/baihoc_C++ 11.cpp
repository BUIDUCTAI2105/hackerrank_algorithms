// Bài t?p
Viêt chuong trình nhâp tu bàn phím 2 so nguyên a, b.  hãy kiem tra xem giá tri cua ca a và b có khác 0 không. Neu có hien thi:

a is not equal to 0 and b is not equal to 0
Nguuc lai neu a hoac b có giá tri bang 0 thì hien thi:

a is equal to 0 or b is equal to 0

#include<iostream>

using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	if (a != 0 && b != 0){
		cout << "a is not equal to 0 and b is not equal to 0";
	} else {
		cout << "a is equal to 0 or b is equal to 0";
	}
	return 0;
}
