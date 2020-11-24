// bai tap
Viet chuong trình nhap tu bàn phím diem cua mot hoc sinh. Biet diem hop le là diem nam trong doan tu 0 den 10, ban hãy kiem tra xem diem vua nhap có hop le không, neu có thì hien thi ra màn hình:

The score is valid
Nguoc lai neu diem không hop le thì hien thi:

The score is not valid

#include<iostream>

using namespace std;

int main() {
	int score;
	cin >> score;
	if(score < 0 || score > 10){
		cout << "The score is not valid";
	} else {
		cout << "The score is valid";
	}

	return 0;
}
