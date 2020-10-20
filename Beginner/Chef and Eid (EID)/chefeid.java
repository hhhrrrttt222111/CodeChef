/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner input = new Scanner(System.in);

        int t= input.nextInt();
        for(int i=0;i<t;i++){

            int n=input.nextInt();
            input.nextLine();

            int[] values=new int[n];
            String arr[]=input.nextLine().split(" ");


            for(int k=0;k<n;k++){
                values[k]=Integer.parseInt(arr[k]);
            }
            Arrays.sort(values);


            int minDiff=values[1]-values[0];
            for(int k=0;k<n-1;k++){
                int diff=values[k+1]-values[k];
                if(diff<minDiff){
                    minDiff=diff;
                }
            }

            System.out.println(minDiff);

        }
    }
}
