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
		        int K=scan.nextInt();
		        int arr[]=new int[N];
		        for(int i=0;i<N;i++){
		            arr[i]=scan.nextInt();
		        }
		        Arrays.sort(arr);
		        long sum=0;
		        for(int i=K;i<N-K;i++){
		            sum+=arr[i];
		        }
		        double avg=(double)sum/(N-2*K);
		        System.out.println(avg);
		    }
        }
        scan.close();
	}
}
