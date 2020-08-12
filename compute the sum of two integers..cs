using System;
using System.Collections.Generic;
using System.IO;
class Solution
{

    static int solveMeFirst(int a, int b)
    {
        return a + b;

    }

    static void Main(String[] args)
    {
        int val1 = Convert.ToInt32(Console.ReadLine());
        int val2 = Convert.ToInt32(Console.ReadLine());
        int sum = solveMeFirst(val1, val2);
        Console.WriteLine(sum);
        Console.ReadKey();
    }
}      

   //   compute the sum of two integers.
    
   // nhập 2 số từ bàn phím a và b kiểu nguyên
   // trả về return a + b
   //có câu lên Console.ReadKey để dừng màn hình xem kết quả