// viêt hàm kiam tra time cua thuât toán Interchange_Sort 
//B1: viêt hàm interchangeSort nhu bình thuong, gioi han phân tu cua mang bang define
//	viêt nhâp, xuât mang sô nguyên , hàm dôi chô swap và hàm sap xep interchangeSort
//B2: thêm vào thu viên time.h và lênh dê do thoi gian chay cua thuat toán
//	clock_t start, end;
//	double time_use;
//    end = clock();
//	int KQ = time_use = (double) (end - start)/ CLOCKS_PER_SEC;   

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nLoi roi kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void InterchangeSort(int a[], int n)
{
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}
int main()
{
	clock_t start, end;
	double time_use;
	int a[MAX], n;
	nhap(a, n);
	start =	clock();
	InterchangeSort(a, n);
	end = clock();
	int KQ = time_use = (double) (end - start)/ CLOCKS_PER_SEC;
	printf("\n Thoi gian thuc thi InterchangeSort la %f ", KQ);

	getchar();
	return 0;
}
