#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define MAX 100000

void nhapMang_Random(int a[], int &n)
{
	// khoi tao ngau nhien
	srand(time(NULL));

	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	int i;
	if (n > 0)
	{
	a[i] = rand() % 100;
// khoi tao ngau nhien tung phan tu tu chi so 1 toi n - 1
	for (int i = 1; i < n; i++)
	{
		a[i] = a[i - 1] + rand() % 100;
	}
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void ImplMerge(int a[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 =  right - mid;
 
    int* L = new int[n1];
    int* R = new int [n2];
 
    for (int ii = 0; ii < n1; ii++)
        L[ii] = a[left + ii];
    for (int jj = 0; jj < n2; jj++)
        R[jj] = a[mid + 1+ jj];
 
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = left +(right -left)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        ImplMerge(a, left, mid, right);
    }
}
 
int main()
{
	int a[MAX];
	int a_size = sizeof(a)/sizeof(a[0]);
 	int n;
	nhapMang_Random(a, n);
	xuatmang(a, n);
	cout << "mang sau khi sap xep la:";
	clock_t start = clock();// ham bat dau dem thoi gian thuc hieen chuong trình

	mergeSort(a, 0, a_size - 1);
	xuatmang(a, n);
	clock_t finish = clock();// ham deem thoi gian ket thúc
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout <<"\n\n\n";
	printf("Thoi gian thuc thi: %.6lf", duration);
	system("pause");
	
	return 0;
}
