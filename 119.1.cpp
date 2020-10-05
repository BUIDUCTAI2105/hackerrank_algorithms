// Liet kê tat ca các so nguyên to nho hon n

#include<stdio.h>
#include<conio.h>
#include<math.h>

bool kiemTraNguyenTo(int n){
		
		if (n < 2){
			return false;
		}
		else if (n > 2){
				
				if (n % 2 == 0){
					return false;
				}
				for (int i = 3; i <= sqrt((float)n); i ++){
					if(n % i == 0){
						return false;
					}
				}
		}
		return true;
}

void lietKeNguyenTo(int n){
		for(int i = 2; i < n; i++)
	{
		if(kiemTraNguyenTo(i) == true)
			printf("%4d", i);
	}
}
int main()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);

	lietKeNguyenTo(n);

	getch();
	return 0;
}
