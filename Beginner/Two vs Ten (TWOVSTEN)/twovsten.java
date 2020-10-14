import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0;i<t;i++){
		        int n = scan.nextInt();
		        if(n%10==0)
		            System.out.println(0);
		        else if(n%5==0)
		            System.out.println(1);
		        else
		            System.out.println(-1);
		    }
        }
        scan.close();
	}
}
