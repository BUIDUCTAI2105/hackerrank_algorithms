// B�i t?p
Vi�t chuong tr�nh nh�p tu b�n ph�m 2 so nguy�n a, b.  h�y kiem tra xem gi� tri cua ca a v� b c� kh�c 0 kh�ng. Neu c� hien thi:

a is not equal to 0 and b is not equal to 0
Nguuc lai neu a hoac b c� gi� tri bang 0 th� hien thi:

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
