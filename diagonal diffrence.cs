//Given a square matrix, calculate the absolute difference between the sums of its diagonals.

//For example, the square matrix  is shown below:

//1 2 3
//4 5 6
//9 8 9  
//The left-to-right diagonal = 1+5+9 = 15 . The right to left diagonal =3+5+9= 17 . Their absolute difference is |15-17|=2 .
//Tính tổng trên hai đường chéo của ma trận vuông. Dọc theo đường chéo đầu tiên của ma trận, chỉ số hàng = chỉ số cột tức là mat [i] [j] nằm trên đường chéo đầu tiên nếu i = j.
//Dọc theo đường chéo khác, chỉ số hàng = n - 1 - chỉ số cột tức là mat [i] [j] nằm trên đường chéo thứ hai nếu i = n-1-j.
// sử dụng hai vòng lặp lồng vào nhau, tính tổng trên các đường chéo của ma trận.
//Sample Input

//3
//11 2 4
//4 5 6
//10 8 -12
//Sample Output

//15

using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'diagonalDifference' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */

    public static int difference(int[,] arr,
                                 int n)
    {
        int d1 = 0, d2 = 0;

        for (int i = 0; i < n; i++)
        {
            d1 += arr[i, i];
            d2 += arr[i, n - i - 1];
        }

        return Math.Abs(d1 + d2);
    }

    public static void Main()
    {
        int n = 3;

        int[,] arr ={{11, 2, 4}, 
                     {4 , 5, 6}, 
                     {10, 8, -12}};

        Console.Write(difference(arr, n));
        Console.ReadKey();
    }
} 

