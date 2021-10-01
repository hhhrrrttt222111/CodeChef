import java.util.*;
class Starters11 {
    public static void main(String[] args)  {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        for (int i = 1; i <= T; i++) {
            String S = sc.nextLine();
            S=S+" ";
            int N=S.length();
            String temp="";
            for(int j=0;j<N-1;j++){
                String c1=Character.toString(S.charAt(j));
                String c2=Character.toString(S.charAt(j+1));
                if(!c1.equals(c2)){
                    temp= temp + c1;
                }

            }
            int count_u=0;
            int count_d=0;

            
            int b = temp.length();
            for(int j=0;j<b;j++){
                char ch = temp.charAt(j);
                if(ch=='U'){
                    count_u++;
                }
                if(ch=='D'){
                    count_d++;
                }
            }
            if(count_d>=count_u){
                System.out.println(count_u);
            }
            else {
                System.out.println(count_d);
            }

        }
    }
}
