// Viet chuong trình nhap vào mot so nguyên có ba chu so. Hãy in ra cách doc cua nó.

#include<stdio.h>
#include<conio.h>

int main(){
	int so;  
	printf("Nhap vao so = ");
	scanf("%d", &so);
	if (so < 100 || so > 999){
		printf("\nKhong hop le !");
		getch();
		return 0;
	}
	else 
	{
		int donvi = so % 10;
		so /= 10;  
		int chuc = so % 10;
		int tram = so / 10;

		if (tram == 1)
		{
			printf("Mot");
		}
		else if (tram == 2)
		{
			printf("Hai");
		}
		else if (tram == 3)
		{
			printf("Ba");
		}
		else if (tram == 4)
		{
			printf("Bon");
		}
		else if (tram == 5)
		{
			printf("Nam");
		}
		else if (tram == 6)
		{
			printf("Sau");
		}
		else if (tram == 7)
		{
			printf("Bay");
		}
		else if (tram == 8)
		{
			printf("Tam");
		}
		else if (tram == 9)
		{
			printf("Chin");
		}
		printf(" Tram ");

		if (chuc == 2)
		{
			printf("Hai");
		}
		else if (chuc == 3)
		{
			printf("Ba");
		}
		else if (chuc == 4)
		{
			printf("Bon");
		}
		else if (chuc == 5)
		{
			printf("Nam");
		}
		else if (chuc == 6)
		{
			printf("Sau");
		}
		else if (chuc == 7)
		{
			printf("Bay");
		}
		else if (chuc == 8)
		{
			printf("Tam");
		}
		else if (chuc == 9)
		{
			printf("Chin");
		}
		printf(" Muoi ");


		if (donvi == 1)
		{
			printf("Mot");
		}
		else if (donvi == 2)
		{
			printf("Hai");
		}
		else if (donvi == 3)
		{
			printf("Ba");
		}
		else if (donvi == 4)
		{
			printf("Bon");
		}
		else if (donvi == 5)
		{
			printf("Lam");
		}
		else if (donvi == 6)
		{
			printf("Sau");
		}
		else if (donvi == 7)
		{
			printf("Bay");
		}
		else if (donvi == 8)
		{
			printf("Tam");
		}
		else if (donvi == 9)
		{
			printf("Chin");
		}
	}
	getch();
	return 0;
}
