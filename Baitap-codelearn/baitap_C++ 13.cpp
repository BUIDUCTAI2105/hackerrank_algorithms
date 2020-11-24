// bài tap
//Viet chuong trình nhap tu bàn phím 3 so nguyên. Sau dó hien thi lên màn hình so lon nhat trong 3 so này.
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
