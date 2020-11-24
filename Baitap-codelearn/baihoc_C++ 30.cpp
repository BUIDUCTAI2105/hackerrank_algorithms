// bai tap
de màn hình hien thi ra các so le tu 1 toi 100.

#include<iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if( i% 2 == 0){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
