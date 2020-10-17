import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t > 0) {
            String str = scan.next();
            int W = 0, L = 0;
            int i;
            for(i = 0; i < str.length(); i++) {
                if(str.charAt(i) == '0')
                    L++;
                else if(str.charAt(i) == '1')
                    W++;
            }
            if(W > L)
                System.out.println("WIN");
            else
                System.out.println("LOSE");

            t-=1;
        }
        scan.close();

	}
}
