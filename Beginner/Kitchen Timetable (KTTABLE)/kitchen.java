import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		int t;
		t = scan.nextInt();
		while(t-->0) {
			int n,p=0,count=0;
			n = scan.nextInt();
			int A[] = new int[n];
			int B[] = new int[n];

			for(int i=0;i<n;i++) {
				A[i] = scan.nextInt();
			}

			for(int i=0;i<n;i++) {
				B[i] = scan.nextInt();
				if(A[i]-p >= B[i]) {
					count++;
				}
				p = A[i];
			}
			System.out.println(count);
        }
        scan.close();
	}
}
