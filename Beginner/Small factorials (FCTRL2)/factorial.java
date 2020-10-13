import java.util.Scanner;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();

		for (int n=0; n<N; n++)
		{
		    int K = scan.nextInt();
		    BigInteger factorial = new BigInteger("1"); 
		    
		    for (int k=1; k<=K; k++)
		    {
		        factorial = factorial.multiply(BigInteger.valueOf(k));
		    }
		    
		    System.out.println(factorial);
        }
        scan.close();
	}
}