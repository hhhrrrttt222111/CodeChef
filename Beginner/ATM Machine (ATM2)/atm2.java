import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int p=0;p<t;p++){
		        int N = scan.nextInt();
		        int K = scan.nextInt();
		        int arr[]=new int[N];
		        for(int i=0;i<N;i++)
		            arr[i]=scan.nextInt();
		        for(int i=0;i<N;i++){
		            if(arr[i]<=K){
		                K = K-arr[i];
		                System.out.print(1);
		            }
		            else
		                System.out.print(0);
		        }
		        System.out.println();
		    }
        }
        scan.close();
	}
}
