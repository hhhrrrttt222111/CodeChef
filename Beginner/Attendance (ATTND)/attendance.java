/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class attendance {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        for (int i = 0; i < t; i++) {

            int n = input.nextInt();
            input.nextLine();

            String[] arr1=new String[n];
            String[] arr2=new String[n];
            String[] arr3=new String[n];

            for(int j=0;j<n;j++){
                String temp[]=input.nextLine().split(" ");
                arr1[j]=temp[0];
                arr2[j]=temp[1];
                arr3[j]=temp[0];
            }
            for(int x=0;x<n;x++){
                for(int y=1;y<n;y++){
                    if(x!=y & arr1[x].equals(arr1[y])){
                        arr3[x]=arr1[x]+" "+arr2[x];
                        arr3[y]=arr1[y]+" "+arr2[y];
                    }
                }
            }

            for(String s:arr3){
                System.out.println(s);
            }
        }
    }
}
