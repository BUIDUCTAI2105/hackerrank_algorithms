// Viet chuong tr�nh in bang cuu chuong ra m�n h�nh

#include <stdio.h>
 
int main(){
	

    for(int i = 2; i <= 9;i++){
        printf("\n");
        for(int j = 0; j < 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
}
 
