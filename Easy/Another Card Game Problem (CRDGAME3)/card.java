import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t-->0)
		{
		    String s=br.readLine();
		    String[] tmp=s.split(" ");
		    int c=Integer.parseInt(tmp[0]);
		    int r=Integer.parseInt(tmp[1]);
		    int c1=c/9;
		    if(c%9!=0)
		        c1++;
		    int r1=r/9;
		    if(r%9!=0)
		        r1++;
		    if(c1<r1)
		        System.out.println("0 "+c1);
		    else
		       System.out.println("1 "+r1);
		  
		}
		
	}
}