import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    int[] arr = new int[t];
		    for(int i=0;i<t;i++){
		        arr[i] = scan.nextInt();
		    }
		    Arrays.sort(arr);
		    for(int i=0;i<t;i++){
		        System.out.println(arr[i]);
		    }
		}
		scan.close();
	}
}
