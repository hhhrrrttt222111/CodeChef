using System;

namespace Calculator
{
    class Program
    {
        public static void Main(string[] args)
        {
            int A = 0, B = 0;
            string C;
            
            Console.WriteLine("Welcome to the calculator program! \n\n");

            Console.WriteLine("Please enter your first number: ");

            A = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Please enter your second number: ");

            B = Convert.ToInt32(Console.ReadLine());
            
            Console.WriteLine("Please enter your operator [+, -, /, *]: ");

            C = Console.ReadLine();

            switch (C)
            {
                case "+":
                    Console.WriteLine("Result: " + (A + B));
                    break;
                case "-":
                    Console.WriteLine("Result: " + (A - B));
                    break;
                case "/":
                    Console.WriteLine("Result: " + (A / B));
                    break;
                case "*":
                    Console.WriteLine("Result: " + (A * B));
                    break;
                default:
                    Console.WriteLine("Invalid Operator Entered!");
                    break;
            }
        }
    }
}
