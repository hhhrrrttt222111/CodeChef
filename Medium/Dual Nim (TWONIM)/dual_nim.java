import java.util.*;
import java .io.*;
public class Main
{
    public static void main(String[] args) throws IOException
    {
        Scanner in=new Scanner(System.in);
           int t=in.nextInt();
           while(t-->0){
           int n=in.nextInt();
           int[] a=new int[n];
           for(int i=0;i<n;i++)
           {
            
               a[i]=in.nextInt();
           }
          int ans=0;
           
            for(int i=0;i<n;i++)
           {
               ans^=a[i];
           }
           boolean a6=true;
           if(ans!=0)
           {
               if(n%2==1)
               {
                   a6=false;
                   
                   
                   
               }
           }
       
            System.out.println(a6?"First":"Second");  
           }
        }
       

    }

