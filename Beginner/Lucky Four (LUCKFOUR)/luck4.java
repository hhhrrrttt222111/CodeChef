import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int list = scan.nextInt();
		for(int i = 0; i< list; i++){
		    int a = scan.nextInt();
		    System.out.println(solve(a));
        }
        scan.close();
	}
	
	public static int solve(int num){
	    int count = 0;
	    while(num > 0){
	        int rem = num % 10;
	        if(rem == 4)
	        count++;
	        
	        num /= 10;
	    }
	    return count;
	}
}