import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan = new Scanner(System.in);
	    if(scan.hasNext()){
	        int t = scan.nextInt();
	        for(int c=0; c<t; c++){
	            int a = scan.nextInt();
	            int b = scan.nextInt();
	            int count = 0;
	            for(int i=a+b+1; true; i++){
	                count++;
	                int f=0;
	                for(int j=2; j*j<=i; j++){
	                    if(i%j==0){
	                        f = 1;
	                        break;
	                    }
	                    
	                }
	                if(f==0){
	                        break;
	                    }
	            }
	            System.out.println(count);
	        }
        }
        scan.close();
	}
}
