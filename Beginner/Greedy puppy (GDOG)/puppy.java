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
		    int n = input.nextInt();
		    int k = input.nextInt();
		    
		    int max = -1;
		    
		    for(int j=1; j<k+1; j++)
		    {
		        if((n%j) > max)
		        {
		            max = n%j;
		        }
		    }
		    
		    System.out.println(max);
		}
	}
}
