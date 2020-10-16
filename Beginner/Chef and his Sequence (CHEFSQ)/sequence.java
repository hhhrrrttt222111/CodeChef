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
		    int[] sequence = new int[n];
		    
		    for(int j=0; j<n; j++)
		    {
		        int x = input.nextInt();
		        sequence[j] = x;
		    }
		    
		    int m = input.nextInt();
		    int[] subsequence = new int[m];
		    
		    for(int k=0; k<m; k++)
		    {
		        int y = input.nextInt();
		        subsequence[k] = y;
		    }
		    
		    int idx1 = 0;
		    int idx2 = 0;
		    int count = 0;
		    
		    while(idx1<n && idx2<m)
		    {
		        if(sequence[idx1] == subsequence[idx2])
		        {
		            idx1++;
		            idx2++;
		            count++;
		        }
		        
		        else
		        {
		            idx1++;
		        }
		    }
		    
		    if(count == m)
		    {
		        System.out.println("Yes");
		    }
		    
		    else
		    {
		        System.out.println("No");
		    }
		}
	}
}
