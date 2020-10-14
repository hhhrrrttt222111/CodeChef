import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan = new Scanner(System.in);
	    if(scan.hasNext()){
	        int t=scan.nextInt();
	        for(int i=0;i<t;i++){
	            String s=scan.next();
	            int a = 0;
	            int b = 0;
	            for(int j=0;j<s.length();j++){
	                if(s.charAt(j)=='a')
	                    a++;
	                else
	                    b++;
	            }
	            if(a>b)
	                System.out.println(b);
	            else
	                System.out.println(a);
	        }  
        }
        scan.close();
	}
}
