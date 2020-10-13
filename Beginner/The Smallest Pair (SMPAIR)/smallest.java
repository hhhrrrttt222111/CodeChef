import java.util.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner scan = new Scanner(System.in);
	    if(scan.hasNext()){
	        int t = scan.nextInt();
	        for(int c=0; c<t; c++){
	            int n = scan.nextInt();
	            int arr[] = new int[n];
	            for(int i=0; i<n; i++){
	                arr[i] = scan.nextInt();
	            }
	            Arrays.sort(arr);
	            System.out.println(arr[0]+arr[1]);
	        }
        } 
        scan.close();
	        
	}
}
