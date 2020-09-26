// Viet chuong trình nhap giá tri x sau khi tính giá tri cua hàm so:


#include<iostream>

using namespace std;
	
float Tinh(float x)
{
	float ketqua;
	if(x >= 5){
		ketqua = 2 * x * x + 5 * x + 9;
	}
	else{
		ketqua = -2 * x * x + 4 * x - 9;
	}
	
	return ketqua;

}
int main()
{
	float x;
	cout << " Nhap x: ";
	cin >> x;
	
	float ketqua = Tinh(x);
 	
	cout << " KQ = " << ketqua;

	
	return 0;
}

