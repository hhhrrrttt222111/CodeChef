import java.util.Scanner;

public class ChefWars {

    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);
        final int testcaseAmount = scanner.nextInt();

        for (int testcase = 0; testcase < testcaseAmount; testcase++) {
            int darthHealth = scanner.nextInt();
            int power = scanner.nextInt();

            do {
                darthHealth -= power;
                power /= 2;
            } while (darthHealth > 0 && power > 0);

            if (darthHealth <= 0) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }
}
