// bai tap
viet chuong tr�nh hien thi ra m�n h�nh c�c so c� so 0 o cuoi tu 1 toi 1000 (m�n h�nh so hien thi l�n c�c so 10, 20, 30, ..., 990, 1000)

#include<iostream>

using namespace std;

int main() {
    int i = 1;
    do {
        if(i % 10 == 0){
            cout << i << " ";
        }
        i++;
    } while (i <= 1000);
    return 0;
}
