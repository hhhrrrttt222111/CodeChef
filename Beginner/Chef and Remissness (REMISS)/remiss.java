import java.util.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
			int t = scan.nextInt();
			while(t!=0){
			    int a = scan.nextInt();
			    int b = scan.nextInt();
			    if(a>b){
			        System.out.print(a);
			    }else{
			        System.out.print(b);
			    }
			    System.out.println(" " + (a+b));
			}
		scan.close();
		
	}
}