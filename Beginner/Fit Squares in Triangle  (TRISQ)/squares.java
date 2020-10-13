import java.util.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan = new Scanner(System.in);
	    if(scan.hasNext()) {
	        int t=scan.nextInt();
	        for(int i=0;i<t;i++) {
	            int b=scan.nextInt();
	            b = b-2;
	            b = b/2;
	            System.out.println(b*(b+1)/2);
	        }
        }
        scan.close();
	}
}
