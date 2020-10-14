import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner scan = new Scanner (System.in);
        if(scan.hasNext()){
            int t=scan.nextInt();
            for(int m=0;m<t;m++){
                int N = scan.nextInt();
                int K = scan.nextInt();
                String s[]=new String[N];
                int p[]=new int[N];
                for(int i=0;i<N;i++){
                    s[i]=scan.next();
                }
                for(int i=0;i<K;i++){
                    int now=scan.nextInt();
                    for(int j=0;j<now;j++){
                        String w=scan.next();
                        for(int o=0;o<N;o++){
                            if(s[o].contains(w))
                                p[o]=1;
                        }
                    }
                }
                for(int i=0;i<N;i++){
                    if(p[i]==0)
                        System.out.print("NO ");
                    else
                        System.out.print("YES ");
                }
                System.out.println();
            }
        }
        scan.close();
	}
}
