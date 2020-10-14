import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner scan=new Scanner(System.in);
		if(scan.hasNext()){
		    char c = scan.next().charAt(0);
		    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
		        System.out.println("Vowel");
		    else 
		        System.out.println("Consonant");
        }
        scan.close();
	}
}