import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0; i<t; i++){
		        int num = scan.nextInt();
		        if(num==2010||num==2015||num==2016||num==2017||num==2019)
		            System.out.println("HOSTED");
		        else
		            System.out.println("NOT HOSTED");
		    }
        }
        scan.close();
	}
}