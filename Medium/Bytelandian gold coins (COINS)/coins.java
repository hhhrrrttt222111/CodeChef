import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class Main {

    private static final Map<Integer, Long> cache = new HashMap<>();

    public static void main(String[] args) {
        int n;

        try (BufferedReader input = new BufferedReader(new InputStreamReader(System.in))) {
            while (true) {
                n = Integer.parseInt(input.readLine());
                System.out.println(maxAmount(n));
            }
        } catch (Exception e) {

        }
    }

    /**
     * method that gets the converts Bytelandian coins to American dollars
     * @param byteLandianCoins amount of Bytelandian coins
     * @return maximum amount of American dollars that can be made from <code>byteLandianCoins</code>
     */
    private static long maxAmount(int byteLandianCoins) {
        if (byteLandianCoins <= 4) return byteLandianCoins;

        Long max = cache.get(byteLandianCoins);
        if (max != null) return max;

        long coin1 = maxAmount(byteLandianCoins / 2);
        long coin2 = maxAmount(byteLandianCoins / 3);
        long coin3 = maxAmount(byteLandianCoins / 4);
        long total = coin1 + coin2 + coin3;

        max = total > byteLandianCoins ? total : byteLandianCoins;
        cache.put(byteLandianCoins, max);

        return max;
    }
}
