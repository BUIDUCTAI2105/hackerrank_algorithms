//	B1: su dung vong lap while voi dieu kien so khac 0; thi soT = (soT * 10) + (so % 10), va so = so/10 vi xet tu 0 toi 9
// 	B2:	dung l�nh switch case  kiem tra tung so rieng le d� xuat ra cach doc  case se bat dau tu 0 toi 9 v� moi case se in ra cach doc cua chu so do

#include<iostream>

using namespace std;

int main ()
{
	int so, soT;
	cout << "Nhap so n: ";
	cin >> so;
	
	cout << so << "\n Thanh chu la : ";
	
	while (so != 0){
		soT = (soT * 10) + (so % 10);
		so /= 10;
	}

	while (soT != 0){
		switch (soT % 10){
			case 0:{
				cout << "Khong";
				break;
				}
			case 1:{
				cout << "Mot ";
				}
			case 2:{
				cout << "Hai ";
				}
			case 3:{
				cout << "Ba ";
				}
			case 4:{
				cout << "Bon ";
				}
			case 5:{
				cout << "Nam ";
				}
			case 6:{
				cout << "Sau ";
				}
			case 7:{
				cout << "Bay ";
				}
			case 8:{
				cout << "Tam ";
				}
			case 9:{
				cout << "Chin ";
				}							
	}
	
	soT = soT / 10;

	}
	
	return 0;
}
