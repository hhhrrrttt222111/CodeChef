/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   int t=Integer.parseInt(br.readLine());
	   
	   while(t-- > 0) {
	       int n = Integer.parseInt(br.readLine());
	       String[] nums=br.readLine().split(" ");
		    long[] arr=new long[n];
		    for(int i=0; i<n; i++)
		    arr[i]=Long.parseLong(nums[i]);
		    long count=1;
		    int sub=1;
		    
		    for(int i=1; i<n; i++){
		        if(arr[i]>=arr[i-1])
		        sub++;
		        else
		        sub=1;
		        
		        count+=sub;
		    }
		    
		    System.out.println(count);
	       
	       
	   }
	 
	}
}