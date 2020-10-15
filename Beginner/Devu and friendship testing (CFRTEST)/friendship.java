import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int v=0; v<t; v++){
		        int n = scan.nextInt();
		        int arr[] = new int[n];
		        for(int i=0; i<n; i++)
		            arr[i] = scan.nextInt();
		        Arrays.sort(arr);
		        int C=1;
		        for(int i=0; i<n-1; i++){
		            if(arr[i] != arr[i+1])
		                C++;
		        }
		        System.out.println(C);
		    }
        }
        scan.close();
	}
}
