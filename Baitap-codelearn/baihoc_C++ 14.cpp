// bai tap
// Viet chuong trình nhap tu bàn phím so nguyên a. Ban hãy kiem tra xem a có nam trong doan [10, 100] không, neu có thì hien the ra màn hình:

{P} is in the range [10, 100]
Nguoc lai hien thi ra màn hình:

{P} is not in the range [10, 100]
Voi {P} là giá tra cua bien a.
#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if(a >= 10 && a <= 100){
		cout << a << " is in the range [10, 100]";
	} else {
		cout << a << " is not in the range [10, 100]";
	}
	return 0;
}
