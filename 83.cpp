// Viet chuong trình nhap vào hai so thuc. Kiem tra xem chúng có cùng dau hay không

#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (a >= 0 && b >= 0){
		cout << "a and b have the same sign";
	}
	else
		cout << "a and b have different signs";
}

