import java.util.Scanner;

public class Processing_A_String {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter random letters and numbers: ");
		String str = scan.nextLine();
		System.out.print("\nSum of all numbers: ");
		System.out.println(splitter(str));
	}
	
	static int splitter(String str) {
		int sum = 0;
		for (char ch : str.replaceAll("\\D", "").toCharArray())
		{
			int num = ch - '0';
			sum += num;
		}
		
		return sum;
	}
}
