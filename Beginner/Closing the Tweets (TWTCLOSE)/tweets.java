import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan = new Scanner(System.in);
		
	    int N = scan.nextInt();
	    int K = scan.nextInt();
	    
	    int c = 0;
	    int []arr = new int[N];
	    for(int i = 0; i<K; i++){
	        
	        if(scan.next().equals("CLICK")) {
	            int a = scan.nextInt(); 
	            if(arr[a-1] == 0){
	                arr[a-1] = 1;
	                c++;
	            }
	            else {
	                arr[a-1] = 0;
	                c--;
	            }
	        }
	        else {
	            arr = new int[N];
	            c = 0;
	        }
	    System.out.println(c);        
        }
        scan.close();
	}
}
