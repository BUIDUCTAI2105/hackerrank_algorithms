// Bài t?p
B?n hãy vi?t chuong trình nh?p vào t? bàn phím s? nguyên n. Sau dó ki?m tra xem n?u n là s? ch?n thì hi?n th? ra:

n is an even number
Ngu?c l?i, n?u n là s? l? thì hi?n th? ra:

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

