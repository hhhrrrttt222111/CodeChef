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
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		
		while( t-- > 0 ){
		    int k = scn.nextInt();
		    int n = scn.nextInt();
		    HashSet<Character> visited = new HashSet<>();
		    int duplicates = 0;
		    for( char ch : Integer.toString(k).toCharArray() ){
		        if( !visited.contains( ch ) ){ visited.add(ch); }
		        else{ duplicates++; }
		    }
		    
		    System.out.println( (int)Math.pow( 3 - duplicates , 3 ) );
		}
	}
}
