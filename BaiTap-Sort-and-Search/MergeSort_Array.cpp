// thuat toan sap xep Merge voi array

#include<stdlib.h>
#include<stdio.h>
 

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* Tao c�c mang tam */
    int L[n1], R[n2];
 
    /* Copy du lieu sang c�c mang tam */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* G�p hai mang tam vua r�i v�o mang arr*/
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l l� ch? s? tr�i v� r l� ch? s? ph?i c?a m?ng c?n du?c s?p x?p */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Tuong t? (l+r)/2, nhung c�ch n�y tr�nh tr�n s? khi l v� r l?n
        int m = l+(r-l)/2;
 
        // G?i h�m d? quy ti?p t?c chia d�i t?ng n?a m?ng
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
 
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
 
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
