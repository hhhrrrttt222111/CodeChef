import java.util.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);

		int a = scan.nextInt();
	    int b = scan.nextInt();
	    
	    if (a>b) {
	        System.out.println(a - b);
        } 
        else {
	        System.out.println(a + b);
        }
        scan.close();
	}
}
