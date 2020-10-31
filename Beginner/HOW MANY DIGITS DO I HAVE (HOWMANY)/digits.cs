using System;

namespace Digits
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Please enter a number: ");
            int n;
            string s = Console.ReadLine();
            
            if (int.TryParse(s, out n))
            {
                Console.WriteLine();
                switch (s.Length)
                {
                    case 1:
                        Console.WriteLine("1");
                        break;
                    case 2:
                        Console.WriteLine("2");
                        break;
                    case 3:
                        Console.WriteLine("3");
                        break;
                    default:
                        Console.WriteLine("More than 3 digits");
                        break;
                }
            }
            else
            {
                Console.WriteLine("You did not enter a number!");
            }
        }
    }
}
