/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) {
            int n=input.nextInt();
            HashSet<Integer> set = new HashSet<>();
            for(int j=0;j<n;j++){
                int temp=input.nextInt();
                if (temp>0) set.add(temp);
            }
            System.out.println(set.size());
        }
    }
}