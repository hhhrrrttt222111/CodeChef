import java.util.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t=scan.nextInt();
		    for(int i=0;i<t;i++){
		        int A = scan.nextInt();
		        int B = scan.nextInt();
		        if(A>B){
		            System.out.println(">");
		        }
		        else if(B>A){
		            System.out.println("<");
		        }
		        else{
		            System.out.println('=');
		        }
		    }
        }
        scan.close();
	}
}