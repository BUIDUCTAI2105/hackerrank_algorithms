// B�i t?p
B?n h�y vi?t chuong tr�nh nh?p v�o t? b�n ph�m s? 2 nguy�n a v� b. Sau d� hi?n th? ra m�n h�nh:

N?u a l?n hon ho?c b?ng b th� hi?n th? ra:

a is greater than or equal to b
Ngu?c l?i n?u a nh? hon b th� hi?n th? ra:

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
