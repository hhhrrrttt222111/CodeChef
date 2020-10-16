import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int v=0;v<t;v++){
		        int N = scan.nextInt();
		        int B = scan.nextInt();
		        int flag = 0;
		        int size = 0;
		        for(int i=0;i<N;i++){
		            int W = scan.nextInt();
		            int H = scan.nextInt();
		            int P = scan.nextInt();
		            if(P>B)
		                continue;
		            else if(size<H*W){
		                flag = 1;
		                size = H*W;
		            }
		        }
		        if(flag==1)
		            System.out.println(size);
		        else
		            System.out.println("no tablet");
		    }
        }
        scan.close();
	}
}
