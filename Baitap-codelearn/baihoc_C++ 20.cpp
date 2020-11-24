// bai tap
 viet chuong trình nhap vào tu bàn phím so nguyên n và thuc hien hien thi các so tu n ve -5.
 
 #include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= -5; i --){
        cout << i << " ";
    }
    return 0;
}
