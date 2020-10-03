// Liet kê tat ca các so chính phuong nho hon n.

#include<stdio.h>
#include<conio.h>
#include<math.h>

bool KTraChinhPhuong(int n)
{
	return sqrt(float(n)) == (int)sqrt((float)n);
}
void LKCP(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(KTraChinhPhuong(i) == true)
			printf("%4d", i);
	}
}
int main()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);

	LKCP(n);

	getch();
	return 0;
}
