
import java.util.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int c=0; c<t; c++){
		        double sal = scan.nextDouble();
		        double gross = 0;
		        if(sal<1500)
		            gross = sal+(double)(sal*0.1)+(double)(sal*0.9);
		        else
		            gross = sal+(sal*0.98)+500;
		        System.out.println(gross);
		    }
        }
        scan.close();
    }
}