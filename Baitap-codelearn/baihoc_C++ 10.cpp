// bai tap
Gi?i h?n k� t?: 3000 
Ti?ng Vi?t
�? b�i
Vi?t chuong tr�nh nh?p v�o t�n c?a 2 ngu?i, b?n h�y ki?m tra xem t�n c?a 2 ngu?i n�y c� gi?ng nhau kh�ng. N?u c� th� hi?n th? ra:

two people have the same name
Ngu?c l?i n?u t�n c?a 2 ngu?i n�y kh�ng gi?ng nhau th� hi?n th? ra:

two people don't have the same name

#include<iostream>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	if(a == b)
		cout << "two people have the same name";
	else 
		cout << "two people don't have the same name";	
	return 0;
}
