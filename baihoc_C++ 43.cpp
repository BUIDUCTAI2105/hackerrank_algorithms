// bai tap
Cho mot mang 2 chieu các so nguyên n hàng m cot a duoc nhap tu bàn phím. viet chuong trình tính tong các phan tu chia het cho 5 trong a.

#include<iostream>

using namespace std;

int main() {
    int a[100][100];
    int n, m;
   
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 5 == 0) {
				sum += a[i][j];
			}
		}
	}
	
	cout << sum;

    return 0;
}
