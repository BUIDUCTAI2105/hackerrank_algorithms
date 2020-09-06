// Bài t?p
B?n hãy vi?t chuong trình nh?p vào t? bàn phím s? nguyên n và hi?n th? ra màn hình:

N?u n là s? nguyên duong thì hi?n th? ra:

n is a positive number
N?u n là s? nguyên âm thì hi?n th? ra:

n is a negative number
N?u n = 0 thì hi?n th? ra:

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
