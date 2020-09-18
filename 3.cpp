// tinh S(n) = 1 + 1/2 + 1/3 + ... 1/n

#include<iostream>
using namespace std;

int main () {
	int n, i;
	float S;
	do{
		cout << " n > 0: ";
		cin >> n;
	}while(n <= 0);
	 	for (int i = 1; i < n; i ++){
		 	S += 1/(float)i;
		 }
		 cout << "sum: " << S << endl;
		 return S;
}
