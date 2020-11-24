// giai phuong trinh va bien luan phuong trinh ax + b = 0 ( bac 1 )

#include<iostream>

using namespace std;

int main(){
	int a, b;
	double KQ;
	
	cout << " a =  ";
	cin >> a;
	cout << " b =  ";
	cin >> b;
	if (a == 0){
		if(b == 0){
			cout << " no solution " << endl;
		}else {
			cout << " have solutions " << endl;
		}
	}else{
		KQ = (double) -b/a;
		cout << " the equation has the solution: " << KQ << endl;
	} 
	
	return 0;
}


