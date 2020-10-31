import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class ChefAndDistinctNumbers {

    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);
        final short testcaseAmount = scanner.nextShort();

        for (short testcase = 0; testcase < testcaseAmount; testcase++) {
            final int numbersAmount = scanner.nextInt();
            final Set<Long> numbers = new HashSet<>();
            boolean hasDuplicates = false;

            for (int numberIndex = 0; numberIndex < numbersAmount; numberIndex++) {
                final long number = scanner.nextLong();
                hasDuplicates |= !numbers.add(number);
            }

            if (hasDuplicates) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
            numbers.clear();
        }
    }
}
