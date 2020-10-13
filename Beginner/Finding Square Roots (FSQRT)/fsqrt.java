import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner scan = new Scanner(System.in);
        int t, n;
        double r = 1.0;
		t = scan.nextInt();
		for(int i=0;i<t;i++)
		{
		    n = scan.nextInt();
		    r = Math.sqrt(n);
		    n = (int)Math.floor(r);
		    System.out.println(n);
        }
        scan.close();
	}
}
