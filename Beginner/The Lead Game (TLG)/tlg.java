import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int a=0, b=0;
		int av=0, bv=0;
		int m=0, win=0;
		for(int i=0;i<n;i++)
		{
		    a = scan.nextInt();
		    b = scan.nextInt();
		    av += a;
		    bv += b;
		    if(Math.abs(bv-av) > m)
		    {
		        m = Math.abs(bv-av);
		        if(a>b)
		            win = 1;
		        else
		            win = 2;
		    }
		}
        System.out.print(win + " " + m);
        scan.close();
	}
}
