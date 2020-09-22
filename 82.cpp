// viet chuong trinh tim so lon nhat trong ba so thuc a, b, c

#include<iostream>

using namespace std;

int main(){
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


