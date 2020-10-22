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
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		while(T-->0)
		{
		    int num=sc.nextInt();
		    int ctr=numberOfZeros(num);
		    System.out.println(ctr);
		}
		sc.close();
	}
	public static int numberOfZeros(int num)
	{
	    int count=0;
	    while(num>=5)
	    {
	        num=num/5;
	        count+=num;
	    }
	    return count;
	}
}
