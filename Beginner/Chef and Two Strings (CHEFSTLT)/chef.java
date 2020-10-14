import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception{
	 	Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t=scan.nextInt();
		    for(int c=0;c<t;c++){
		        String str1 = scan.next();
		        String str2 = scan.next();

		        int l = str1.length();
		        int A = 0;
		        int B = 0;
		        for(int i=0;i<l;i++){
		            if(str1.charAt(i)=='?'||str2.charAt(i)=='?'){
		                A++;
		                continue;
		            }
		            else if(str1.charAt(i)!=str2.charAt(i))
		                B++;
		        }
		        System.out.print(B+" "+(B+A));
		        System.out.println();
		    }
        }
        scan.close();
	}
}
