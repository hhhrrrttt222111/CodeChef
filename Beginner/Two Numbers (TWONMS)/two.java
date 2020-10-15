import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t=scan.nextInt();
		    for(int p=0;p<t;p++){
		        int A = scan.nextInt();
		        int B = scan.nextInt();
		        int N = scan.nextInt();
		        if(N%2!=0)
		            A = A*2;
		        
		        int max = (A>B?A:B);
		        int min = (A<B?A:B);
		        int div = max/min;
		        System.out.println(div);
		    } 
        }
        scan.close();
	}
}
