// Liet kê tat ca các so chính phuong nho hon n.

#include<stdio.h>
#include<conio.h>
#include<math.h>

bool kiemTraChinhPhuong(int n)
{
	return sqrt(float(n)) == (int)sqrt((float)n);
}
void lietKeChinhPhuong(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(kiemTraChinhPhuong(i) == true)
			printf("%4d", i);
	}
}
int main()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);

	lietKeChinhPhuong(n);

	getch();
	return 0;
}
