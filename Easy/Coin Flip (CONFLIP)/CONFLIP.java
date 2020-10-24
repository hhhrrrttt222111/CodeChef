import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

class CONFLIP {

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(reader.readLine()); //Number of test cases
        while(T-- > 0) {
            int G = Integer.parseInt(reader.readLine()); //Number of games played by Elephant
            while (G-- > 0) {
                int[] inq = Arrays.stream(reader.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
                int I = inq[0]; //Initial state of all coins (1 => Head, 2 => Tail)
                int N = inq[1]; //Number of coins/rounds
                int Q = inq[2]; //goal: 1 => number of Coins showing head, 2=> number of coins showing tail
                if (N % 2 == 0 || I == Q) System.out.println(N / 2);
                else System.out.println((N / 2) + 1);
            }
        }
    }
}
