#include<stdio.h>
#include<conio.h>
#define MAX 100

struct SinhVien
{
	int ma;
	char ten[20];
	float Dtb;
};
void nhapmang(SinhVien a[MAX], int &n)
{
	printf("nhap so phan tu mang: ");
	scanf_s("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("a[%] = ",i);
		scanf_s("%d", &a[i]);
	}
}
void xuatmang(SinhVien a[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);	
	}
}

int LinearSearch(SinhVien a[MAX],int n,SinhVien x)
{
	for (int i = 0; i < n; i++)
	{
		if((a[i].ten,x.ten)==0){ 
			return i;
		}
		return -1;
	}
}
void swap(SinhVien x, SinhVien y)
{
	SinhVien t = x;
	x = y;
	y = t;
}
void InterchangeSortDTB(SinhVien a[MAX], int n)
{
   for (int i = 0; i < n-1; i++)
      for (int j = i+1; j < n; j++)
         if (a[i].Dtb>a[j].Dtb)
         {
            swap(a[i],a[j]);
         }
}
void InterchangeSortMSSV(SinhVien a[MAX], int n)
{
   for (int i = 0; i < n-1; i++)
      for (int j = i+1; j < n; j++)
         if (a[i].ma>a[j].ma)
         {
            swap(a[i],a[j]);
         }
}
void selectionSortMSSV(SinhVien a[MAX], int n)
{
    for (int i = 0; i < n-1; i++)
    {
    int min = i;
    for (int j = i+1; j < n; j++)
	{
        if (a[j].ma<a[min].ma)
        min = j;
	}
        swap(a[min], a[i]);
	}
}
void selectionSortDTB(SinhVien a[MAX], int n)
{
    for (int i = 0; i < n-1; i++)
    {
    int min = i;
    for (int j = i+1; j < n; j++)
	{
        if (a[j].Dtb<a[min].Dtb)
        min = j;
	}
        swap(a[min], a[i]);
	}
}
void QuickSortDTB(SinhVien a[MAX],int i,int j)
{
	if(i<j)
	{
		SinhVien x = a[j];
		int left = i;
		int right = j - 1;
		while(true)
		{
			while(left <= right && x.Dtb>a[left].Dtb) left++; 
			while(right >= left && a[right].Dtb>x.Dtb) right--;
			if (left >= right) break;
			swap(a[left], a[right]); 
			left++;
			right--;
		}
		swap(a[left], a[j]);
		QuickSortDTB(a,i,left-1);
		QuickSortDTB(a,left+1,j);
	}
}
void QuickSortMSSV(SinhVien a[MAX],int i,int j)
{
	if(i<j)
	{
		SinhVien x = a[j];
		int left = i;
		int right = j - 1;
		while(true)
		{
			while(left <= right && x.ma>a[left].ma) left++; 
			while(right >= left && a[right].Dtb>x.ma) right--;
			if (left >= right) break;
			swap(a[left], a[right]); 
			left++;
			right--;
		}
		swap(a[left], a[j]);
		QuickSortMSSV(a,i,left-1);
		QuickSortMSSV(a,left+1,j);
	}
}
int main()
{
	SinhVien a[MAX];
	int n, chon;

	nhapmang(a, n);
	xuatmang(a, n);


	do
	{
		printf("\nChon: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
			case 1:
			{
				SinhVien x;
				printf("Nhap ten Sinh vien: ");
				scanf_s("%d", &x.ten);
				printf("Nhap ma sinh vien: ");
				scanf_s("%d", &x.ma);
				if (LinearSearch(a,n,x) == -1)
				{
					printf("Ko tim thay!");
				}
				else
				{
					printf("Tim thay sinh vien tai %d", LinearSearch(a,n,x));
				}
				break;
			}
		case 2:
			{
				printf("Quick sort\n");
				QuickSortDTB(a, 0, n - 1);
				QuickSortMSSV(a, 0, n - 1);
				xuatmang(a,n);
				printf("\n");
				printf("Interchange sort\n");
				InterchangeSortDTB(a, n);
				InterchangeSortMSSV(a, n);
				xuatmang(a,n);
				printf("\n");
				printf("Interchange sort\n");
				selectionSortMSSV(a, n);
				selectionSortDTB(a, n);
				xuatmang(a,n);
				break;
			}
		case 0:
			{
				printf("Thoat");
				break;
			}
		default:
			break;
		}
	} while (chon != 0);

	getch();
}

