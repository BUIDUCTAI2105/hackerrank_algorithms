// Viet chuong tr�nh nhap 3 so thuc. H�y thay tat ca c�c so �m bqng tri tuyet doi cua n�


#include<iostream>

using namespace std;

int main(){
	float a, b, c;
	cout << " a= ";
	cin >> a;
	
	cout << " b= " ;
	cin >> b;
	
    cout << " c= " ;
	cin>> c;
	
	
	if (a < 0){
		a = -a;
	}
	
	if (b < 0){
		b = -b;
	}
	
	if (c < 0){
		c = -c;
	}
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
