#include <iostream>
#include <vector>

void swap(std::vector<int> v, int x, int y) { //function swaps
    int t = v[x];
    v[x] = v[y];
    v[y] = t;

}

void quicksort(std::vector<int> &a, int L, int R) { // Sort_Quick
    int i, j, mid;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    int x = a[mid];

    while (i<R || j>L) {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;

        if (i <= j) {
            swap( a, i, j); //error=swap function doesnt take 3 arguments
                i++;
                j--;
        }
        else {
            if (i < R)
                quicksort(a, i, R);
            if (j > L)
                quicksort(a, L, j);
            return;
            }
    }
}

void PrintArray (std::vector<int> a)//print out the elements
{
    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] <<" ";
        std::cout << std::endl;
}

int main() {
    
	std::cout << "Enter array to be sorted (-1 to end)\n"; // stop when entering -1

    std::vector<int> a;
    int n = 0;
    while (n != -1)
    {
        std::cin>>n;
        if (n != -1)
            //add elements to the vector container
            a.push_back(n);
    }
    quicksort(a, 0, n - 1);

    std::cout<<"Sorted array is as\n";
    PrintArray(a);

    return 0;
}
