/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int[] villagesCount = new int[2];
            int currentCount = 0;
            char currentTribe = '.';
            String villages = scanner.next();
            for (int j = 0; j < villages.length(); j++) {
                if (villages.charAt(j) == '.') {
                    currentCount++;
                } else {
                    char tribe = villages.charAt(j);
                    int tribeIndex = tribe == 'A' ? 0 : 1;
                    villagesCount[tribeIndex] += 1;
                    boolean isSameTribe = tribe == currentTribe;
                    if (isSameTribe) villagesCount[tribeIndex] += currentCount;
                    currentCount = 0;
                    currentTribe = tribe;
                }
            }
            System.out.println(villagesCount[0] + " " + villagesCount[1]);
        }
    }
}
