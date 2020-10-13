import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        int t, n;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        for(int i=0; i<t; i++)
        {
            n = scan.nextInt();
            int sum=0, rem=0;
            while(n>0)
            {
                rem = n%10;
                n = n/10;
                sum = sum*10+rem;
            }
            System.out.println(sum);
        }
        scan.close();
    }
}