﻿using System.CodeDom.Compiler;
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

    public static int diagonalDifference(List<List<int>> arr)
    {
        int d1 = 0, d2 = 0;
        int n = arr.Count;
        for (int i = 0; i < n; i++)
        {
            d1 += arr[i][i];
            d2 += arr[i][n - i - 1];
        }

        return Math.Abs(d1 - d2);
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        string value;
        // Check whether the environment variable exists.
        value = Environment.GetEnvironmentVariable("OUTPUT_PATH");
        // If necessary, create it.
        if (value == null)
        {
            Environment.SetEnvironmentVariable("OUTPUT_PATH", "result.text");
        }
        
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<List<int>> arr = new List<List<int>>();

        for (int i = 0; i < n; i++)
        {
            arr.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList());
        }

        int result = Result.diagonalDifference(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
