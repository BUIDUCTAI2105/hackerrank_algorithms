// //Tính S(n) = x + x ^ 2 / 1 + 2+ ... + x^n / 1 + 2 + 3 + .... + N


#include <iostream>
using namespace std;




float calSum(int N, float X)
{
   
    float S = 0, T1 = 1, T2 = 0;
  
  
    for (int i = 1; i <= N; i++)
    {
        T1 = T1 * X;
        T2 = T2 + i;
        
        S = S + (float)T1 / T2;
    }

   
    return S;
}
int main()
{
    int N;
    float X;
    cout << "N = ";;
    cin >> N;

    cout << "X = ";;
    cin >> X;

    float result = calSum(N, X);
    cout << "Result = " << result << endl;

    system("pause");
    return 0;
}
