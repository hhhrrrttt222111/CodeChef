import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        long cities, jumps, ccity, mycity;
        while (t > 0) {
            cities = sc.nextLong();
            jumps = sc.nextLong();
            ccity = sc.nextLong();
            mycity = sc.nextLong();
            boolean no = true;
            for (int i = 1; i <= cities; i++) {
                if ((ccity + jumps * i) % cities == mycity) {
                    System.out.println("YES");
                    no = false;
                    break;
                }
            }
            if (no) {
                System.out.println("NO");
            }
            t--;
        }
    }
}
