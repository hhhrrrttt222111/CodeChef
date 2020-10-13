import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int n = scan.nextInt();
		    int[] arr = new int[n];
		    for(int i=0;i<n;i++){
		        int num = scan.nextInt();
		        int sum=0, d=0;
		        while(num!=0)
		        {
		            d=num%10;
		            num=num/10;
		            sum+=d;
		        }
		        arr[i]=sum;
		    }
		    for(int i=0;i<n;i++){
		        System.out.println(arr[i]);
		    }
		}
	}
} 