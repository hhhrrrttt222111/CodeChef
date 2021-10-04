import java.util.*;
import java.lang.*;
import java.io.*;

public class Codechef {

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            HashMap < Integer, Integer > freq = new HashMap < Integer, Integer > ();
            for (int i = 0; i < 4; i++) {
                int a = in.nextInt();
                if (!freq.containsKey(a)) {
                    freq.put(a, 1);
                } else {
                    freq.put(a, freq.get(a) + 1);
                }
            }
            System.out.println(pairs(freq));
        }
    }
    private static int pairs(HashMap < Integer, Integer > freq) {
        if (freq.containsValue(4))
            return 0;
        else if (freq.containsValue(3))
            return 1;
        else
            return 2;

    }
}
