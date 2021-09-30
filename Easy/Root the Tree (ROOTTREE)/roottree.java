import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in= new Scanner(System.in);
   int t=in.nextInt(),p,n,i;
   for(p=0;p<t;p++)
   {
    n=in.nextInt();  
    int ans=0;
    int a,degree[]=new int[n];
    for(i=0;i<n-1;i++)
    {
      a=in.nextInt();  
      degree[in.nextInt()-1]++;
    }
    for(i=0;i<n;i++)
        ans=ans+(int)Math.max(0,--degree[i]);
    System.out.println(ans);
   }//test end
	}
}
