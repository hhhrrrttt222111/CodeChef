import java.util.*;
import java.lang.*;
import java.io.*;

class countSubstrings
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		int t=s.nextInt();
		while(t-->0)
		{
		    int n=s.nextInt();
		    String str=s.next();
		   long c=0;
		    for(int i=0;i<n;i++)
		    {
		        if(str.charAt(i)=='1')
		         c++;
		    }
		    System.out.println((c*(c+1))/2);
		
		}
	}
}