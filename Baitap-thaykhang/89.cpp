// Viet chuong tr�nh t�nh tong c�c gi� tri le nguy�n duong nho hon N

#include<iostream>

using namespace std;

int main(){
	int Sum = 0;
	int n;
	
	cout << " n: ";
	cin >> n;
	
	for(int i = 1; i < n; i++){
		Sum = Sum + i;
		i = i + 2;
	if(i >= n)
		break;	
	}
	
	cout << " Sum = " << Sum;
}
