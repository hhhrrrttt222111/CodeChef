import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
        int t, s;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        while(t-->0) {
            s = scan.nextInt();
            long a[] = new long[s];
            for(int i =0;i<s;i++) {
                a[i] = scan.nextLong();
                
            }
            Arrays.sort(a);
            System.out.println(a[0]*(s-1));
            
        }
        scan.close();
	}
}
