// Viet chuong tr�nh nhap v�o hai so thuc. Kiem tra xem ch�ng c� c�ng dau hay kh�ng

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

