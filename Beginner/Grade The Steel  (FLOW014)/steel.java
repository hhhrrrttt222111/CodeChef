import java.util.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		while(n-- > 0){
		    int h = 0, t = 0;
		    float c = 0;
		    h = scan.nextInt();
		    c = scan.nextFloat();
		    t = scan.nextInt();
		    
		    if(h > 50 && c < 0.7 && t > 5600){
		        System.out.println("10");
            }
            else if(h > 50 && c < 0.7){
		        System.out.println("9");
            }
            else if(c < 0.7 && t > 5600){
		        System.out.println("8");
            }
            else if(h > 50 && t > 5600){
		        System.out.println("7");
            }
            else if(h > 50 || c < 0.7 || t > 5600){
		        System.out.println("6");
            }
            else{
		        System.out.println("5");
		    }
		    
        }
        scan.close();
	}
}
