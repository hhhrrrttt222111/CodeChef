import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());

            int[] steps = new int[n];
            List<Integer> finalPos = new ArrayList<>();
            st = new StringTokenizer(br.readLine());

            for (int i = 0; i < n; i++) {
                steps[i] = Integer.parseInt(st.nextToken());
                finalPos.add(i + 1);
            }

            for (int i = n - 1; i >= 0; i--) {
                steps[i] = finalPos.remove(finalPos.size() - steps[i] - 1);
            }

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < n; i++) {
                if (i != 0) sb.append(" ");
                sb.append(steps[i]);
            }
            System.out.println(sb);
        }
    }
}