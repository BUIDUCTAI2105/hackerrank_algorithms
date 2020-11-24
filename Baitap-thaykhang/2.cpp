//Tính S(n) = 12 + 22 + 32 + … + n2
#include<iostream>
using namespace std;
int main(){
    int x;
    int n;
    int lt = 1;
    int s = 0;
    cout << " x: ";
    cin >> x;
    cout <<" n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        lt = lt * x;
        s += lt;
    }
    cout << "sum: " << s;
    return s;
}
