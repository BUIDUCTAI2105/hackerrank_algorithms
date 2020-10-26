// dung lênh switch case  kiem tra tung so rieng le dê xuat ra cach doc  



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
