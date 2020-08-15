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

class Solution
{

    // Complete the aVeryBigSum function below.
    static long aVeryBigSum(long[] ar)
    {
        long sum = 0;
        for (int i = 0; i < ar.Length; i++)
        {
            sum += ar[i];
        }
        return sum;
    }

    static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int arCount = Convert.ToInt32(Console.ReadLine());

        long[] ar = Array.ConvertAll(Console.ReadLine().Split(' '), arTemp => Convert.ToInt64(arTemp))
        ;
        long result = aVeryBigSum(ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}

//In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.


//vì đề bài yêu cầu là tính tổng phần tử trong mảng vs số nguyên đó rất lớn nên dùng kiểu dữ liện long
// giống bài simple array sum thì cần một biến tổng sum 
//dùng vòng lặp for và cuối cùng xuất ra tổng phẩn tử trong mảng đó