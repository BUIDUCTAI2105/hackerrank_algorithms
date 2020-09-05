// Bài t?p
B?n hãy vi?t chuong trình nh?p vào t? bàn phím tên, tu?i c?a m?t ngu?i. Sau dó hi?n th? ra màn hình:

In 15 years, age of {P1} will be {P2}
V?i {P1} là tên c?a ngu?i dó, {P2} là tu?i c?a ngu?i dó sau 15 nam.

#include<iostream>

using namespace std;

int main() {
	string name;
	int age;
	cin >> name >> age;
	cout << "In 15 years, age of " << name << " will be " << age + 15;
	return 0;
}

