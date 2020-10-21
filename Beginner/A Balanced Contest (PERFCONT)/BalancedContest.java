/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class BalancedContest {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        input.nextLine();
        for (int i = 0; i < t; i++) {
            int hardCount=0;
            int cakeWalkCount=0;

            int n = Integer.parseInt(input.next());
            int p = Integer.parseInt(input.next());
            input.nextLine();

            String temp[]=input.nextLine().split(" ");
            int[] arr=new int[n];
            for(int j=0;j<n;j++){
                arr[j]=Integer.parseInt(temp[j]);
            }

            for(int val:arr){
                if(val<=(p/10)){
                    hardCount++;
                }else if(val>=(p/2)){
                    cakeWalkCount++;
                }
            }

            if(hardCount==2 && cakeWalkCount==1){
                System.out.println("yes");
            }else{
                System.out.println("no");
            }
        }
    }
}
