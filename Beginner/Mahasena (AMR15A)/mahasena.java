import java.util.*;


class Coddechef {
	public static void main (String[] args) throws java.lang.Exception {
        
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    int even = 0;
		    int odd = 0;
		    for(int i=0;i<t;i++){
		        int num = scan.nextInt();
		        if(num%2==0)
		            even++;
		        else
		            odd++;
		    }
		    if(even>odd){
		        System.out.println("READY FOR BATTLE");
		    }
		    else{
		        System.out.println("NOT READY");
		    }
        }
        scan.close();
	}
}