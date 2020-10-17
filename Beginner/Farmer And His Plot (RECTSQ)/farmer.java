import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input = new Scanner(System.in);
		
		int t = input.nextInt();
		
		for(int i=0; i<t; i++)
		{
		    int length = input.nextInt();
		    int breadth = input.nextInt();
		    
		    int area = length*breadth;
		    int gcd=1;
		    
		    for(int val = 1; val <= length && val <= breadth; val++)
            {
                if(length%val==0 && breadth%val==0)
                {
                    gcd = val;
                }
            }
            
            int result = (int) (area/(gcd*gcd));
            System.out.println(result);
		}
	}
}
