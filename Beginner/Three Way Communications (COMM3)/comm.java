

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int c=0;c<t;c++){
		        int n = scan.nextInt();
		        int x1 = scan.nextInt();
		        int y1 = scan.nextInt();
		        int x2 = scan.nextInt();
		        int y2 = scan.nextInt();
		        int x3 = scan.nextInt();
		        int y3 = scan.nextInt();
		        double A = Math.pow(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)),0.5);
		        double B = Math.pow(((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)),0.5);
		        double C = Math.pow(((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)),0.5);
		        if((A<=n&&B<=n&&C<=n)||(A>n&&B<=n&&C<=n)||(A<=n&&B>n&&C<=n)||(A<=n&&B<=n&&C>n))
		            System.out.println("yes");
		        else
		            System.out.println("no");
		    }
        }
        scan.close();
	}
}
