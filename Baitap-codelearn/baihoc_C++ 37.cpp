// bai tap
	Cho mot mang c�c so nguy�n n phan tu arr v� so nguy�n k duoc nhap tu b�n ph�m. viet chuong tr�nh hien thi ra m�n h�nh so phan tu c� gi� tri bang k trong mang arr.

#include<iostream>

using namespace std;

int main() {
    int n, k;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    
    int count = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] == k){
            count ++;
        }
    }
    cout << count;
    return 0;
}	
