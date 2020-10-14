import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan=new Scanner (System.in);
	    if(scan.hasNext()){
	        int t = scan.nextInt();
	        for(int c=0; c<t; c++){
	            int h[] = new int[101];
	            int m = scan.nextInt();
	            int x = scan.nextInt();
	            int y = scan.nextInt();
	            for(int j=0; j<m; j++){
	                int no = scan.nextInt();
	                int min = no-x*y;
	                int max = no+x*y;
	                if(min<1)
	                    min = 1;
	                if(max>100)
	                    max=100;
	                for(int k=min; k<=max; k++)
	                    h[k] = 1;
	            }
	            int p = 0;
	            for(int k=1; k<=100; k++){
	                if(h[k]==0){
	                    p++;
	                }
	            }
	            System.out.println(p);
	        }
        }
        scan.close();
	}
}
