// bai tap
	viet chuong trình nhap vào bàn phím so nguyên n và hien thi ra các so chan tu n toi 100. (dung While )
	
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
