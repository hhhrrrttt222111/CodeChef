import java.util.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int T = scan.nextInt();
		    for(int i=0;i<T;i++){
		        int a = scan.nextInt();
		        int b = scan.nextInt();
		        int c = scan.nextInt();
		        if(a!=0 && b!=0 && c!=0 && (a+b+c)==180){
		            System.out.println("YES");
		        }
		        else{
		            System.out.println("NO");
		        }
		    }
        }
        scan.close();
    }
}
