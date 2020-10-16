/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		
		for(int i=0; i<t; i++)
		{
		    int n = input.nextInt();
		    ArrayList<Integer> types = new ArrayList<Integer>();
		    
		    for(int j=0; j<n; j++)
		    {
		        int dollType = input.nextInt();
		        
		        if(types.contains(new Integer(dollType)))
		        {
		            types.remove(new Integer(dollType));
		        }
		        
		        else
		        {
		            types.add(dollType);
		        }
		    }
		    
		    System.out.println(types.get(0));
		}
	}
}
