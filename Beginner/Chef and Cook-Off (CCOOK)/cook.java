/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int n = scan.nextInt();
		    for(int v=0;v<n;v++){
		        int arr[]=new int[5];
		        int s=0;
		        for(int i=0;i<5;i++){
		            arr[i]=scan.nextInt();
		            if(arr[i]!=0)
		                s++;
		        }
		        if(s==0)
		            System.out.println("Beginner");
		        else if(s==1)
		            System.out.println("Junior Developer");
		        else if(s==2)
		            System.out.println("Middle Developer");
		        else if(s==3)
		            System.out.println("Senior Developer");
		        else if(s==4)
		            System.out.println("Hacker");
		        else if(s==5)
		            System.out.println("Jeff Dean");
		    }
        }
        scan.close();
	}
}
