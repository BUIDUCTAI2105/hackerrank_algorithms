// bai tap
Gi?i h?n ký t?: 3000 
Ti?ng Vi?t
Ð? bài
Vi?t chuong trình nh?p vào tên c?a 2 ngu?i, b?n hãy ki?m tra xem tên c?a 2 ngu?i này có gi?ng nhau không. N?u có thì hi?n th? ra:

two people have the same name
Ngu?c l?i n?u tên c?a 2 ngu?i này không gi?ng nhau thì hi?n th? ra:

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
