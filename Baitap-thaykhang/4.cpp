// tinh S(n) = 1/2 + 1/4 + ... + 1/2n
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
		  S = S + 1.0 / (2 * i);
		 }
		 cout << "sum: " << S << endl;
		 return S;
		 
}
