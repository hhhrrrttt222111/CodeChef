/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) {
	     
	
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        while(t-->0){
            int n=scan.nextInt();
            int sum=0;int total=0;int value=0;int ans=0;
            int[] a=new int[n];
            int k=scan.nextInt();
            int v=scan.nextInt();
            for(int i=0;i<n;i++){
                a[i]=scan.nextInt();
                sum+=a[i];
            }
            total=n+k;
            value=total*v;
            ans=value-sum;
            if(ans/k>0 && ans%k==0){
                System.out.println(ans/k);
            }else System.out.println(-1);
        }
    }
}
