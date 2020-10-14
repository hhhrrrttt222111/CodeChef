import java.io.*;
import java.lang.*;
import java.util.*;


class CodeChef {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		int i, t, N, M, K;
		t = scan.nextInt();
		for(i = 1; i <= t; i++) {
			N = scan.nextInt();
			M = scan.nextInt();
            K = scan.nextInt();
            scan.close();
			if(N == M) {
				System.out.println("0");
			}
			else if(N < M) {
				if((N + K) <= M) {
					System.out.println(M - (N + K));
				}
				else {
					System.out.println("0");
				}
			}
			else if(N > M) {
				if((M + K) <= N) {
					System.out.println(N - (M + K));
				}
				else {
					System.out.println("0");
				}
			}
        }
        
	}
}