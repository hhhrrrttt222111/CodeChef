import java.util.*;
import java.io.*;

public class carvans {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String[] strs = br.readLine().split("\\s+");
            Stack<Integer> stack = new Stack<>();
            int count = 0;
            for (int i = 0; i < n; i++) {
                while (!stack.isEmpty() && Integer.parseInt(strs[stack.peek()]) >= Integer.parseInt(strs[i])) {
                    stack.pop();
                }
                count += stack.isEmpty() ? 1 : 0;
                stack.push(i);
            }
            System.out.println(count);
        }
    }
}
