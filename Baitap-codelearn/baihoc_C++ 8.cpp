// B�i t?p
B?n h�y vi?t chuong tr�nh nh?p v�o t? b�n ph�m s? nguy�n n v� hi?n th? ra m�n h�nh:

N?u n l� s? nguy�n duong th� hi?n th? ra:

n is a positive number
N?u n l� s? nguy�n �m th� hi?n th? ra:

n is a negative number
N?u n = 0 th� hi?n th? ra:

n is equal to 0

#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n > 0) {
		cout << "n is a positive number";
	}
	if (n < 0) {
		cout << "n is a negative number";
	} 
	if (n == 0) {
		cout << "n is equal to 0";
	}
	return 0;
}
