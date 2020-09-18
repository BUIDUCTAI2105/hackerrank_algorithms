// tinh S(n) = 1/1x2 + 1/ 2x3 + ... + 1/ nx(n+1)

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
		  S += (float)1 / (i * (i + 1));
		  
		 }
		 cout << "sum: " << S << endl;
		 return S;
		 
}
