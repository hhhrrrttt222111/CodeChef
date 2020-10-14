import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(input.readLine());

        int x = Integer.parseInt(st.nextToken());
        double y = Double.parseDouble(st.nextToken());

        if (x + 0.5 > y || x % 5 != 0) System.out.printf("%.2f", y);
        else System.out.printf("%.2f", y - x - 0.5);
    }
}