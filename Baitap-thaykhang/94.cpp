// Viet chuong tr�nh in ra tat ca c�c so le nho hon 100 tru c�c so 5, 7, 93

#include<iostream>

using namespace std;

int main(){
	int i;
	for(i = 1; i < 100; i+=2){
		if((i == 5) || (i == 7) || (i == 93))
			continue;
			
		cout << " " << i;
	}
	
	return 0;
}
