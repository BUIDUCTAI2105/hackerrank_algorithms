// bai tap
Cho mot mang các so nguyên n phan tu a. viet chuong trình hien thi nhung so lon hon hoac bang 0 và nho hon hoac bang 10 trong mang a.

#include<iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] >= 0 && a[i] <= 10){
            cout << a[i] << " ";
        }
    }
    return 0;
}
