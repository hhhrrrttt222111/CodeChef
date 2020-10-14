import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int n;

        while ((n = Integer.parseInt(input.readLine())) != 0) {
            int[] arr = new int[n + 1];
            StringTokenizer st = new StringTokenizer(input.readLine());
            for (int i = 1; i <= n; i++)
                arr[i] = Integer.parseInt(st.nextToken());

            int i = 1;
            for (; i <= n; i++)
                if (arr[arr[i]] != i) break;
            System.out.println(i > n ? "ambiguous" : "not ambiguous");
        }
    }
}