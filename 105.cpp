// Viet chuong trình nhap mot so nguyên có hai chu so. Hãy in ra cách doc cua so nguyên này

#include<stdio.h>
#include<conio.h>

int main(){
	int so;  
	printf("Nhap vao so = ");
		scanf("%d", &so);
	if (so < 10 || so > 99){
		printf("\nKhong hop le !");
		getch();
		return 0;
	}
	else  
	{  

		int donvi = so % 10;
		int chuc = so / 10;

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
			printf("Nam");
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
