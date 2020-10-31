import java.util.Scanner;

public class ChefAndEasyQueries {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final int testcaseAmount = scanner.nextInt();

        for (int testcase = 0; testcase < testcaseAmount; testcase++) {
            final int daysAmount = scanner.nextInt();
            final long queriesCapacity = scanner.nextLong();
            long restQueries = 0;
            int freeDayNumber = 0;

            for (int query = 0; query < daysAmount; query++) {
                final long queriesAmount = scanner.nextLong();
                final long accumulatedQueries = queriesAmount + restQueries;
                restQueries = accumulatedQueries - queriesCapacity;
                if (accumulatedQueries < queriesCapacity && freeDayNumber == 0) {
                    freeDayNumber = query + 1;
                }
            }

            if (freeDayNumber == 0) {
                System.out.println(daysAmount + (restQueries / queriesCapacity) + 1);
            } else {
                System.out.println(freeDayNumber);
            }
        }
    }
}
