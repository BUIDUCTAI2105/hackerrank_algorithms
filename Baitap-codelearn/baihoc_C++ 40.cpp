// bai tap
Cho mot mang c�c so nguy�n n phan tu a. viet chuong tr�nh sap xep c�c phan tu cua mang theo thu tu tang dan v� hien thi ra m�n h�nh mang sau khi d� sap xep.

#include<iostream>

using namespace std;

int main() {    
    int n;
    int a[1000];
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    return 0;
}
