// Bài t?p
B?n hãy vi?t chuong trình nh?p vào t? bàn phím s? 2 nguyên a và b. Sau dó hi?n th? ra màn hình:

N?u a l?n hon ho?c b?ng b thì hi?n th? ra:

a is greater than or equal to b
Ngu?c l?i n?u a nh? hon b thì hi?n th? ra:

a is smaller than b

#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if(a >= b)
		cout << "a is greater than or equal to b";
	else if(a <= b)
		cout << "a is smaller than b";	
	return 0;
}
