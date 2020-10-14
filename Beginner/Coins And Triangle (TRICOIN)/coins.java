import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0; i<t; i++){
		        int n = scan.nextInt();
		        int h = 0;
		        for(x=1; x*(x+1)/2<=n; x++);
		            x--;
		        System.out.println(x);
		    }
        }
        scan.close();
	}
}
