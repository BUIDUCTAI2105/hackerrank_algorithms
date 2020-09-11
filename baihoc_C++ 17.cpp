 // Bài t?p
Cho 2 bien kieu so nguyên a, b và 1 bien kieu ký tu c. CA 3 bien này deu duoc nhap tu bàn phím. Biet bien c là 1 trong 4 ký t? '+', '-', '*' hoac '/'
. Ban hãy viet chuong trình hien thi giá tri cua bieu thuc khi áp dung phép toán c lên a và b. Ví du neu ban nhap a = 7, c = '+', b = 9 nhu bên duoi:

7 + 9
Thì màn hình s? hi?n th? ra:

16
#include<iostream>

using namespace std;

int main() {
	int a, b;
	char c;
	cin >> a >> c >> b;
	switch (c){
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a/b;
		break;			
	}
	return 0;
}

