import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int p=0; p<t; p++){
		        int a = scan.nextInt();
		        int b = scan.nextInt();
		        int c = scan.nextInt();
		        int d = scan.nextInt();
                if((a==b) && (a==c) && (a==d))
                System.out.println("YES");
                else if((a==b) && (c==d))
                    System.out.println("YES");
                else if((a==c) && (b==d))
                    System.out.println("YES");
                else if((a==d) && (c==b))
                    System.out.println("YES");
                else 
                    System.out.println("NO");
		    }
        }
        scan.close();
	}
}
