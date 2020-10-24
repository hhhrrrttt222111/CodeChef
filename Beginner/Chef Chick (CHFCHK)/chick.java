import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		int t=scan.nextInt();
		while(t-->0) {
		    int n=scan.nextInt();
		    int a[]=new int[n];
		    for(int i=0;i<n;i++) {
		         a[i]=scan.nextInt();
		    }
		    
		    Arrays.sort(a);
		    System.out.println(a[0]);
        }
        scan.close();
	}
}
