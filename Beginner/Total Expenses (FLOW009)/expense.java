import java.util.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner (System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int i=0; i<t; i++){
		        float a = scan.nextInt();
		        float b = scan.nextInt();
		        double exp = a*b;
		        if(a>1000){
		            exp = exp-exp/10;
		        }
		        System.out.println(exp);
		    }
        }
        scan.close();
	}
}