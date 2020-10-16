
import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int tc=scan.nextInt();
		    for(int v=0;v<tc;v++){
		        int N = scan.nextInt();
		        int K = scan.nextInt();
		        int s=0;
		        for(int i=0;i<N;i++){
		            int T = scan.nextInt();
		            int D = scan.nextInt();
		            if(K!=0){
		                if(K>T){
		                    K = K-T;
		                    T = 0;
		                }
		                else{
		                    T = T-K;
		                    K = 0;
		                }
		            }
		            s = s+T*D;
		        }
		        System.out.println(s);
		    }
        }
        scan.close();
	}
}
