import java.util.*;
import java.math.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0; i<t;i++){
		        int num = scan.nextInt();
		        int flag = 0;
		        for(int j=2; j<=Math.sqrt(num); j++){
		            if(num%j==0){
		                flag = 1;
		                break;
		            }
		        }
		        if(flag==0 && num!=1)
		            System.out.println("yes");
		        else
		            System.out.println("no");
		    }
        }
        scan.close();
	}
}
