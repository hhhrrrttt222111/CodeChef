import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int p=0; p<t; p++){
		        int n = scan.nextInt();
		        String s = scan.next();
		        int R=0, G=0, B=0;
		        for(int i=0;i<n;i++){
		            if(s.charAt(i)=='R')
		                R++;
		            if(s.charAt(i)=='G')
		                G++;
		            if(s.charAt(i)=='B')
		                B++;
		        }
		        int max = (R>B ? (R>G?R:G) : (B>G?B:G));
		        int S = s.length()-max;
		        System.out.println(S);
		    }
        }
        scan.close();
	}
}
