// b�i tap
//Viet chuong tr�nh nhap tu b�n ph�m 3 so nguy�n. Sau d� hien thi l�n m�n h�nh so lon nhat trong 3 so n�y.
#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if(a >= b && a >= c){
		cout << a;
	}
	else {
		if (a >= b){
			cout << b;
		}
		else {
			cout << c;
		}
	}
	return 0;
}
