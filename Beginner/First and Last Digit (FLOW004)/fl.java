import java.util.*; 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner scan = new Scanner(System.in);
	    if(scan.hasNext()){
	        int t = scan.nextInt();
	        int arr[]=new int[t];
	        for(int i=0;i<t;i++){
	            arr[i] = scan.nextInt();
	        }
	        for(int i=0;i<t;i++){
	            int dgt = 0;
	            int num = arr[i];
	            while(num!=0){
	                dgt++;
	                num /= 10;
	            }
	            int l = arr[i]%10;
	            int f = arr[i]/(int)(Math.pow(10,dgt-1));
	            System.out.println(l+f);
	        }
		}
		scan.close();
	}
}