// Liet k� tat ca c�c uoc so cua so nguy�n duong n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "\nNhap n = ";
    do{
        cin >> n;
        if(n <= 0){
            cout << "\nNhap lai n = ";
        }
    }while(n <= 0);
    
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}
