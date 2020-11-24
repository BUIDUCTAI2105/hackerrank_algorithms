// tinh S(n)=1/2 + 2/3 + 3/4 + ... + n/(n+1)
#include<iostream>
using namespace std;

int main () {
	int n, i;
	double S;
	do{
	    cout <<" n: ";
        cin >> n;
        if(n < 1)
        {
            cout << "sai !";
        }
    }while(n < 1);
	 	for (int i = 1; i < n; i ++){
		  S = S + (double)i / (i + 1);
		 }
		 cout << "sum: " << S << endl;
		 return S;
		 
}
