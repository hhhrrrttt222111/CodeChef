import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
			Scanner scan = new Scanner(System.in);
		
		    int A = scan.nextInt();
		    int B = scan.nextInt();
		    char C = scan.next().charAt(0);
		    
		    switch (C){
                case '+':
                    System.out.println(A+B);
                    break;
                case '-':
                    System.out.println(A-B);
                    break;
                case '*':
                    System.out.println(A*B);
                    break;
                case '/':
                    System.out.println(((double)A)/B);
                    break;
                default:
                    break;
            }
            scan.close();
	}
}
