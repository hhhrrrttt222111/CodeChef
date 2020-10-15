import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int c=0;c<t;c++){
		        int N = scan.nextInt();
		        int K = scan.nextInt();
		        int arr[]=new int[N];
		        for(int i=0;i<N;i++){
		            arr[i] = scan.nextInt();
		        
		            arr[i] += K;
		        }
		        int count=0;
		        for(int i=0; i<N; i++){
		            if(arr[i]%7==0)
		                count++;
		        }
		        System.out.println(count);
		    }
        }
        scan.close();
	}
}
