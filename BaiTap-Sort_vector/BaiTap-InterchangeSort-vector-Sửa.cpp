#include <iostream>
#include <vector>

void Swap (int *a, int *b)//function swaps
{
    int t = *a;
    *a = *b;
    *b = t;
}

void InterchangeSort (std::vector<int> &a)// Sort _ Interchange
{
    std::cout<<"Elements in the array: "<<a.size()<<std::endl;

   
    for (int i = 0; i < a.size() - 1; i++)
    {
        for(int j = 0; j < a.size(); j++)
        {   
            if (a[i] < a[j]){
                Swap(&a[i], &a[j]);
            }
        }
    }
}

void PrintArray (std::vector<int> a)//print out the elements
{
    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] <<" ";
        std::cout << std::endl;
}

int main()
{
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

    
    InterchangeSort(a);

    std::cout<<"Sorted array is as\n";
    PrintArray(a);

    return 0;
}
