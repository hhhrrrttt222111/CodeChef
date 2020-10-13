import java.util.*;

class Codechef {
    public static void main(String args[]) {
        Scanner scan=new Scanner(System.in);
        int T = scan.nextInt();
        for(int i=0; i<T; i++) {
            int a = scan.nextInt();
            if(a<10)
                System.out.println("Thanks for helping Chef!");
            else
                System.out.println("-1");
        }
        scan.close();
    }
}
