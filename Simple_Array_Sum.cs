using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution
{

    /*
     * Complete the simpleArraySum function below.
     */
    static int simpleArraySum(int[] ar)
    {
        int sum = 0;
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

        int[] ar = Array.ConvertAll(Console.ReadLine().Split(' '), arTemp => Convert.ToInt32(arTemp))
        ;
        int result = simpleArraySum(ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
        Console.ReadKey();
    }
}

//Given an array of integers, find the sum of its elements.
//cần một biến tổng sum 
//i = 0  bắt đầu từ 0 ở đầu vòng lăp for

//i < array.length nếu  i  nhỏ hơn array.length,  tiếp tục lặp lại

//i++ sau mỗi vòng lặp, biến i  tăng  lên 1 (tức là i = i + 1)
//gán biến sum += arr[i]
//thêm phần tử vào sum
// cuối cùng phải trả về tổng của các phần tử mảng là một số nguyên.