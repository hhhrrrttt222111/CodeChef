import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scn = new Scanner(System.in);
		if(scn.hasNext()){
		    int num=scn.nextInt();
		    int d = 0;
		    while(num!=0){
		        d++;
		        num /= 10;
		    }
		    if(d==1)
		    System.out.println("1");
		    else if(d==2)
		    System.out.println("2");
		    else if(d==3)
		    System.out.println("3");
		    else if(d>3)
		    System.out.println("More than 3 digits");
		}
	}
}