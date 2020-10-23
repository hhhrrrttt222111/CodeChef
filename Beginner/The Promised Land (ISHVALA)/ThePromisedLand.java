
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		InputReader sc = new InputReader(System.in);
		int t = sc.nextInt();
		while (t-- > 0){
		    int n = sc.nextInt();
		    int m = sc.nextInt();
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    int s = sc.nextInt();
		    int r[] = new int[x+2];
		    int c[] = new int[y+2];
		    r[r.length - 1] = n+1;
		    c[c.length - 1] = m+1;
		    for(int i = 1 ; i <= x ; i++) r[i] = sc.nextInt();
		    for(int i = 1 ; i <= y ; i++) c[i] = sc.nextInt();
		    x = 0; y = 0;
		    for(int i = 1 ; i < r.length ; i++) x += ((r[i] - r[i-1] - 1)/s);
		    for(int i = 1 ; i < c.length ; i++) y += ((c[i] - c[i-1] - 1)/s);
		    System.out.println(x*y);
		}
	}
	
	static class InputReader{
		BufferedReader br;
		StringTokenizer st;
        
        public InputReader(InputStream in){
        	try {
        		br = new BufferedReader(new
        				InputStreamReader(in)); 
        	}catch (Exception e) {
        		System.out.println(e.toString());
        	}
        }
        
        String next(){
        	while (st == null || !st.hasMoreElements()){
        		try{
        			st = new StringTokenizer(br.readLine()); 
                }catch (IOException  e){
                	e.printStackTrace(); 
                }
            }
            return st.nextToken(); 
        }
        
        int nextInt(){
        	return Integer.parseInt(next()); 
        }
        
        long nextLong(){
        	return Long.parseLong(next()); 
        }
        
        double nextDouble(){
        	return Double.parseDouble(next()); 
        }
        
        String nextLine(){
        	String str = "";
        	try{
        		str = br.readLine();
        	}catch (IOException e){
        		e.printStackTrace(); 
            }
            return str; 
        }
    }
}