using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CallCplusplusFunction01
{
    class Program
    {
        static void Main(string[] args)
        {
            var result = Calculator.Add(1,2);
            Console.WriteLine(result);
        }
    }

    public class Calculator
    {
        [DllImport("CDoublePlus.dll", EntryPoint = "Add")]
        public static extern float Add(float num1, float num2);
    }
}
