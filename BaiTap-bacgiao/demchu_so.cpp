// nhap vao m�t s� bat k� in ra c�ch doc s� do
//B1: khai b�o ham docChuSo, voi m�i chuSo = {1,2,3,4,5,6,7,8,9,0} se in ra c�ch doc cua s� do
//
//B2: khai bao tiep m�t ham demSoLuongChuSo voi tham so n, n�u n khac 0 th� n se duoc tinh bang n/10 va bien dem tang len 1 don vi
//			n�u kh�ng thi tra ve dem
//
//B3: khai bao them ham docSo
//			khai bao bien soDao, tim so dao cua so duoc nhap de khi m�i m�t lan % th� se lay ra duoc tung so vi doc tu phai qua trai
// 			su dung m�t bien soLuong de dem co bao nhieu chu so duoc nhap v�o
//			su dung vong lap While voi dieu kien soDao khac 0
//				quy uoc cach doc neu soLuong = 4 chu so th� in ra chu ngan, soLuong = 3 th� in ra chu tram, soLuong = 2 thi in ra chu muoi

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



