// bai tap
	viet chuong tr�nh nhap v�o b�n ph�m so nguy�n n v� hien thi ra c�c so chan tu n toi 100. (dung While )
	
#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n <= 100) {
		if(n % 2 == 0){
			cout << n << " ";
		}
		n++;
	}
	return 0;
}	
