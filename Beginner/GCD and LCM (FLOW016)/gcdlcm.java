import java.util.Scanner;
class Solution {
	static int gcd(int a, int b) {
		if (a == 0)
			return b; 
		return gcd(b % a, a); 
	}
	
	static int lcm(int a, int b) {
		return (a / gcd(a, b)) * b;
	}
	
	public static void main(String[] args) {
        int a, b, t;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt(); // input test cases
        for (int i = 0; i < t; ++i) {
            a = scan.nextInt(); // first input integer
            b = scan.nextInt(); // second input integer

            System.out.println(gcd(a, b) + " " + lcm(a, b));
        }
	}
}
