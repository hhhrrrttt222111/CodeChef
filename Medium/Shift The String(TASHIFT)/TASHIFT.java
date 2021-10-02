import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;

class Test
{
    public static void main(String[]args)throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int num=Integer.parseInt(br.readLine());
        String a=br.readLine();
        String b=br.readLine();
        int[]arr=new int[num];
        int k=0;
        arr[0]=0;
        for(int i=1;i<arr.length;i++){
            if(a.charAt(i)==a.charAt(k))
                arr[i]=++k;
            else
                k=0;
        }
        int i=0;
        int j=0;
        int max=0;
        int index=0;
        int temp=0;
        while(i<a.length()&&temp<(2*num)-1){
            char aa=a.charAt(i);
            char bb=b.charAt(j);
            if(aa==bb){
                i++;
                if(i>max){
                    max=i;
                    index=temp;
                }
                j=(j+1)%num;
            }
            else{
                if(i==0)
                    j=(j+1)%num;
                else
                    temp--;
                i=arr[i];
            }
            temp++;
        }
        if(i==a.length()){
            System.out.println((j+num)-max);
        }
        else if(max==0)
            System.out.println(0);
        else
            System.out.println((index+1)-max);
    }
}
