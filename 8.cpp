// tinh S(n) = 1/2 + 3/4 + ... + 2n+1/2n+2        
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
		  S = S + (float)(2 * i + 1) / (2 * i + 2);
        i++;
        
		 }
		 cout << "sum: " << S << endl;
		 return S;
		 
}        
