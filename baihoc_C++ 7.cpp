// B�i t?p
B?n h�y vi?t chuong tr�nh nh?p v�o t? b�n ph�m s? nguy�n n. Sau d� ki?m tra xem n?u n l� s? ch?n th� hi?n th? ra:

n is an even number
Ngu?c l?i, n?u n l� s? l? th� hi?n th? ra:

n is an odd number

#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if(n % 2 == 0)
		cout << "n is an even number ";
	if(n %2 != 0)
		cout << "n is an odd number ";	
	return 0;
}

