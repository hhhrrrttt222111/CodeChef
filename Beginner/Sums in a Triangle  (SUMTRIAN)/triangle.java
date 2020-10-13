import java.util.*;
import java.math.*;

class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t--!=0) {
            int n = scan.nextInt();
            int arr[][] = new int[n+1][n+1];
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=i; j++)
                    arr[i][j] = scan.nextInt();
            }
		
		for(int i=n-1; i>=1; i--) {
		    for(int j=1; j<=i; j++) {
		        arr[i][j] = arr[i][j]+ Math.max(arr[i+1][j], arr[i+1][j+1]);
		    }
		}
		System.out.println(arr[1][1]);
        }
        scan.close();
	}
}