import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
	    int t = scan.nextInt();
	    for(int i=1;i<=t;i++) {
	        String a = scan.next();
	        String b = scan.next();
	        int l = a.length();
	        int c=0;
	        for(int j=0; j<l; j++) {
	            char ch1 = a.charAt(j);
	            char ch2 = b.charAt(j);
	            if(ch1=='?' || ch2=='?')
	                c=0;
	            if(ch1!='?' && ch2!='?') {
                    if(ch1==ch2)
                        c=0;
                    else {
                        c=1;
                        break;
                        }
                }
	        }
	        if(c==0)
	            System.out.println("Yes");
	        else
	            System.out.println("No");
	    }
	    scan.close();
	}
}
