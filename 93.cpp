// Viet chuong trình kiem tra mot so có phai so nguyên to hay không

#include<iostream>
#include <math.h>

using namespace std;
	

int main(){
	int n;
	cout << " n = ";
	cin >> n;
	
	if(n < 2){
		cout << " not a prime number " << n;
		return 0;
	}	
	int t = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			t++;
		}
	}
	
	if(t == 0){
		cout << "prime number" << n;
	}else{
		cout << " not a prime number " << n;
	}
}
