 // B�i t?p
Cho 2 bien kieu so nguy�n a, b v� 1 bien kieu k� tu c. CA 3 bien n�y deu duoc nhap tu b�n ph�m. Biet bien c l� 1 trong 4 k� t? '+', '-', '*' hoac '/'
. Ban h�y viet chuong tr�nh hien thi gi� tri cua bieu thuc khi �p dung ph�p to�n c l�n a v� b. V� du neu ban nhap a = 7, c = '+', b = 9 nhu b�n duoi:

7 + 9
Th� m�n h�nh s? hi?n th? ra:

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

