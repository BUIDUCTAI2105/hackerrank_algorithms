//Tính S(n) = 1 + 2 + 3 + … + n.

#include<iostream>
using namespace std;
int sum (int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += i;
		}
		return sum;
}
int main(){
	int n;
	do{
		cout << "nhap n: ";
		cin >> n;	
	}while (n <= 0);
		cout << "sum :" << sum(n) << endl;
		return 0;
}
