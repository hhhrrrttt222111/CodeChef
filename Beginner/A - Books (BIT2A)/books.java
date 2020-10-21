/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class books {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        for (int i = 0; i < t; i++) {
            int n = input.nextInt();
            input.nextLine();

            int[] arr=new int[n];
            int[] counters=new int[n];
            Arrays.fill(counters, 0);

            String temp[]=input.nextLine().split(" ");
            for(int j=0;j<n;j++){
                arr[j]=Integer.parseInt(temp[j]);
            }

            for(int x=0;x<n;x++){
                for(int y=x+1;y<n;y++){
                    if(arr[y]>arr[x]) counters[x]++;
                }
            }

            for(int count:counters){
                System.out.print(count+" ");
            }
            System.out.println("\b");
        }
    }
}