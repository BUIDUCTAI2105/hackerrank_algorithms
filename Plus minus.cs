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

    // Complete the plusMinus function below.
    static void plusMinus(int[] arr)
    {
        float posotives = 0;
        float negatives = 0;
        float zeros = 0;
        float Length = arr.Length;

        for (int i = 0; i < Length; i++)
        {
            if (arr[i] < 0) negatives++;
            else if (arr[i] > 0) posotives++;
            else zeros++;
        }
        Console.WriteLine(posotives / Length);
        Console.WriteLine(negatives / Length);
        Console.WriteLine(zeros / Length);
    }

    static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());

        int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), arrTemp => Convert.ToInt32(arrTemp))
        ;
        plusMinus(arr);
    }
}
//Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

//Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10^-4 are acceptable.
//   khai báo biến posotives, negatives, zeros và Length kiểu float vì đề nói in giá trị thập phân
//  dùng for 
//nếu mảng arr[i] < o thì negatives ++
//nếu mảng arr[i] > 0 thì posotive ++
//và còn lại thì zeros ++
/