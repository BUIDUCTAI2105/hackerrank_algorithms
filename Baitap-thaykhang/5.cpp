//  tinh S(n) = 1 + 1/3 + 1/5 + ... + 1/2n+1
#include<iostream>
using namespace std;

int main () {
	int n, i;
	float S;
	do{
	  
	  
        cout <<" n: ";
        cin >> n;
        if(n < 1)
        {
             cout << "sai !";
        }
    }while(n < 1);
	 	for (int i = 1; i < n; i ++){
		  S = S + 1.0 / (2 * i + 1);
		 }
		 cout << "sum: " << S << endl;
		 return S;
		 
}
