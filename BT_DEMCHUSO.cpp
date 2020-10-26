#include <stdio.h>
#include <conio.h>

void docChuSo(int chuSo)
{
	if( chuSo == 0){
		printf(" Khong ");
	}
	else if(chuSo == 1)
	{
		printf(" Mot ");
	}
	else if(chuSo == 2)
	{
		printf(" Hai ");
	}
	else if(chuSo == 3)
	{
		printf(" Ba ");
	}
	else if(chuSo == 4)
	{
		printf(" Bon ");
	}
	else if(chuSo == 5)
	{
		printf(" Nam ");
	}
	else if(chuSo == 6)
	{
		printf(" Sau ");
	}
	else if(chuSo == 7)
	{
		printf(" Bay ");
	}
	else if(chuSo == 8)
	{
		printf(" Tam ");
	}
	else if(chuSo == 9)
	{
		printf(" Chin ");
	}
}

int demSoLuongChuSo(int n){
	
	int dem = 0;
	while (n != 0){
		n /= 10;
		dem++;
	}
	return dem;
}

void docSo(int n){
	int soDao = 0;
	while(n != 0){
		soDao = soDao * 10 + n%10;
		n /= 10;
	}
	int soLuong = demSoLuongChuSo(soDao);
	while (soDao != 0){
		docChuSo(soDao % 10);
		if(soLuong == 4){
			printf(" Ngan ");
		}
		if(soLuong == 3){
			printf(" Tram ");
		}
		if(soLuong == 2){
			printf(" Muoi ");
		}
		soLuong -- ;
		soDao /= 10;
	}
}	

int main()
{
	int n = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	docSo(n);
	
	getch();
	return 0;
}



