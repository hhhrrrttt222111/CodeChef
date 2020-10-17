import java.util.*;


public class CodeChef {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t-->0) {
			int n = scan.nextInt();
			int a[]=new int[n];
			int b[]=new int[n];
			for(int i=0;i<n;i++) {
				a[i]=scan.nextInt();
			}
			Arrays.sort(a);
			for(int i=0;i<n;i++) {
				b[i]=scan.nextInt();
			}
			Arrays.sort(b);
			int sa = 0;
			int sb = 0;
			for(int i=0;i<n-1;i++) {
				sa += a[i];
				sb += b[i];
			}
			if(sa>sb) {
				System.out.println("Bob");
			}
			else if(sa<sb) {
				System.out.println("Alice");
			}
			else {
				System.out.println("Draw");
			}
		}
		scan.close();
	}
}