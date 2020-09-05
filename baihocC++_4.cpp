// Bài t?p
B?n hãy vi?t chuong trình nh?p vào t? bàn phím 2 s? nguyên a và b. Sau dó hi?n th? ra các phép tính trên 2 s? này gi?ng nhu sau:

a + b = {P1}
a - b = {P2}
a * b = {P3}
a / b = {P4}
a % b = {P5}
Trong dó:

{P1} là t?ng c?a a và b.

{P2} là hi?u c?a a và b.

{P3} là tích c?a a và b.

{P4} là thuong c?a a và b.

{P5} là ph?n du c?a phép chia a/b.


#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b;
	return 0;
}
