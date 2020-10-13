import java.util.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
	    if(scan.hasNext()){
	        int t=scan.nextInt();
	        for(int i=0; i<t; i++){
	            int a = scan.nextInt();
	            int b = scan.nextInt();
	            int sum = 0;
	            for(int j=1; j<=a; j++){
	                sum = b*(b+1)/2;
	                b = sum;
	            }
	            System.out.println(sum);
	        }
        }
        scan.close();
	}
}
