import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int l = scan.nextInt();
		    int b = scan.nextInt();
		    int area = l*b;
		    int peri = 2*(l+b);
		    if(area>peri){
		        System.out.println("Area");
		        System.out.println(area);
		    }
		    else if(peri>area){
		        System.out.println("Peri");
		        System.out.println(peri);
		    }
		    else{
		        System.out.println("Eq");
		        System.out.println(area);
		    }
        }
        scan.close();
	}
}