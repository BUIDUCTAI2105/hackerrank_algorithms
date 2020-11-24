// bai tap
	Cho mot mang các so nguyên n phan tu arr và so nguyên k duoc nhap tu bàn phím. viet chuong trình hien thi ra màn hình so phan tu có giá tri bang k trong mang arr.

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
