// bai tap
viet chuong trình hien thi ra màn hình các so có so 0 o cuoi tu 1 toi 1000 (màn hình so hien thi lên các so 10, 20, 30, ..., 990, 1000)

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
