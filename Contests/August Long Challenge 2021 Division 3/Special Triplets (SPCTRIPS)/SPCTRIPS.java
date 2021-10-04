import java.util.*;
import java.lang.*;
import java.io.*;

public class SPCTRIPS {

	class Codechef
	{
	  public static void main (String[] args) throws java.lang.Exception
	  {
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    while(t-- > 0) {
	        int n = sc.nextInt();
	        int cnt = 0;
	        for(int i = 1; i < n+1; i++) {
	            for(int j = i; j < n+1; j += i) {
	                if(j % i == 0) {
	                    for(int k = i; k < n+1; k += j) {
	                        if(k % j == i) cnt++;
	                    }
	                }
	            }
	        }
	        System.out.println(cnt);
	    }
	  }
	}
}
