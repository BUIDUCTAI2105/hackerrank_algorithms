// bai tap
Viet chuong tr�nh nhap tu b�n ph�m diem cua mot hoc sinh. Biet diem hop le l� diem nam trong doan tu 0 den 10, ban h�y kiem tra xem diem vua nhap c� hop le kh�ng, neu c� th� hien thi ra m�n h�nh:

The score is valid
Nguoc lai neu diem kh�ng hop le th� hien thi:

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
