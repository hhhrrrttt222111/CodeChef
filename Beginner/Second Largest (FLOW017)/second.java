import java.util.*;


class Codechef {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);

        int T = scan.nextInt();

        for(int i=0;i<T;i++) {
            int a[] = new int[3];
            a[0] = scan.nextInt();
            a[1] = scan.nextInt();
            a[2] = scan.nextInt();
            Arrays.sort(a);
            System.out.println(a[1]);
        }
        scan.close();
    }
}
