// bai tap
// Viet chuong tr�nh nhap tu b�n ph�m so nguy�n a. Ban h�y kiem tra xem a c� nam trong doan [10, 100] kh�ng, neu c� th� hien the ra m�n h�nh:

{P} is in the range [10, 100]
Nguoc lai hien thi ra m�n h�nh:

{P} is not in the range [10, 100]
Voi {P} l� gi� tra cua bien a.
#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if(a >= 10 && a <= 100){
		cout << a << " is in the range [10, 100]";
	} else {
		cout << a << " is not in the range [10, 100]";
	}
	return 0;
}
