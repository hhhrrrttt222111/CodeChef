import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();

		for (int i=0; i<N; i++)
		{
		    int x = scan.nextInt();
		    int y = scan.nextInt();
            System.out.println(x%y);		
		}
		

	}
}
