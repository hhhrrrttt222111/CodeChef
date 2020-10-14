import java.util.*;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int num = in.nextInt();
            if (num % k == 0) {
                count++;
            }
        }
        System.out.println(count);
    }
}