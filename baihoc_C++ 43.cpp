// bai tap
Cho mot mang 2 chieu c�c so nguy�n n h�ng m cot a duoc nhap tu b�n ph�m. viet chuong tr�nh t�nh tong c�c phan tu chia het cho 5 trong a.

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
