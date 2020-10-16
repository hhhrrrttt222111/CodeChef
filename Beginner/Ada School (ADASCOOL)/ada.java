import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0;i<t;i++){
		        int N = scan.nextInt();
		        int M = scan.nextInt();
		        if(N%2==0||M%2==0)
		            System.out.println("YES");
		        else
		            System.out.println("NO");
		    }
        }
        scan.close();
	}
}
