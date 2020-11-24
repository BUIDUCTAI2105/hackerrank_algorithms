// su dung thua toan Sort voi nhieu phan tu hon ( vd: 10.000) khai ao define de gioi han phan tu them vao ( vd: #define MAX 10000...)
// y tuong: su dung ham docfile de doc file so ( tao mot file.txt cho phan tu vao hoac dung duong dan dua thang vao cau lenh
//					khi do ham se xuat ra cac phan tu co san trong file hoac co trong duong dan truyen
//B1 Su dung ham docFILE 
//B2 viet ham xuat mang nhu binh thuong
//B3 su dung ham Sort( hoac search ) de sap xep (hoac tim kiem ) trong file do
// Uu diem co the sap xep duoc nhieu phan tu hon, tim kiem de hon
// Nhuoc diem can co data truoc 
// tao file.txt bang visual 

#include <stdio.h>
#define MAX 10000

void docFile_N(int a[], int& n, char* tenFile)
{
	//1. Mo file
	FILE* f = fopen(tenFile, "r"); //r: read

	if (f == NULL) return;

	//2.Doc file
	//2.1. Doc n
	fscanf(f,"%d", &n);
	//2.2. Doc phan tu
	for (int i = 0; i < n; i++)
	{
		fscanf(f,"%d", &a[i]);
	}
	
	//3.Dong file
	fclose(f);
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
void selectionSort(int a[], int n)
{
	int i, j, min;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[min]){
				min = j;
				swap(a[min], a[i]);
			}
		}
	}
}

void main()
{
	int a[MAX];
	int n = 0;

	
	docFile_N(a, n, "danhsachcansapxep.txt");
	xuatMang(a, n);

	getchar();
}
