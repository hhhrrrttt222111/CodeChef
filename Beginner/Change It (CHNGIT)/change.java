

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int t=scan.nextInt();
		    for(int v=0;v<t;v++){
		        int N=scan.nextInt();
		        int arr[] = new int[N];
		        for(int i=0;i<N;i++){
		            arr[i] = scan.nextInt();
		        }
		        int ele=0,c=0,d=0;
		        for(int i=0;i<N;i++){
		            ele=arr[i];
		            c=0;
		            for(int j=0;j<N;j++){
		                if(ele==arr[j])
		                c++;
		            }
		            if(c>d)
		            d=c;
		        }
		        System.out.println(N-d);
		    }
        }
        scan.close();
	}
}
