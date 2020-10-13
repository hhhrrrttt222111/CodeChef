import java.util.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {

		Scanner scan = new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0; i<t; i++){
		        int num = scan.nextInt();
		        int rev=0, d=0;
		        int temp = num;
		        
		        while(temp!=0){
		            d = temp%10;
		            temp /= 10;
		            rev = rev*10+d;
		        }
		        if(rev==num){
		            System.out.println("wins");
		        }
		        else{
		            System.out.println("loses");
		        }
		    }
        }
        scan.close();
	}
}
