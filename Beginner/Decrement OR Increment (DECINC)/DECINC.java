import java.util.*;



class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        if(n%4 == 0) {
            n++;
        } else {
            n--;
        }
        System.out.println(n);
        scan.close();
	} 
}
