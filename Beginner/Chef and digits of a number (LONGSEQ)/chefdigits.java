import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner (System.in);
		int t, i, l, k;
		String n;
		char c;
		t = scan.nextInt();
		for(i=1;i<=t;i++) {
			int a=0,b=0;
			if(i==1) {
				scan.nextLine();
				n = scan.nextLine();
			}
			else {
				n = scan.nextLine();
			}
			l = n.length();
			for(k=0;k<l;k++) {
				c=n.charAt(k);
				if(c=='0')
				    a++;
				if(c=='1')
				    b++;
			}
			if(a==1||b==1)
			    System.out.println("Yes");
			else
			    System.out.println("No");
        }
        scan.close();
	}
}