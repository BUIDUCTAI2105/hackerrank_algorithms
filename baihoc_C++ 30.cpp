// bai tap
de m�n h�nh hien thi ra c�c so le tu 1 toi 100.

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
