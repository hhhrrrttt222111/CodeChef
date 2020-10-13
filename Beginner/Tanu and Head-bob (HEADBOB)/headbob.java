import java.util.*;



class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext()){
		    int t = scan.nextInt();
		    for(int c=0; c<t; c++){
		        int n = scan.nextInt();
		        String S = scan.next();
		        if(S.indexOf('I')!=-1)
		            System.out.println("INDIAN");
		        else if (S.indexOf('Y')!=-1)
		            System.out.println("NOT INDIAN");
		        else 
		            System.out.println("NOT SURE");
		    }
        }
        scan.close();
	}
}