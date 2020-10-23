import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(bufferedReader.readLine());
        StringBuilder answer = new StringBuilder();
        for(int i=0;i<t;i++){
            String[] input = bufferedReader.readLine().split(" ");
            int x = Integer.parseInt(input[0]);
            int k = Integer.parseInt(input[1]);
            Solver solver = new Solver();
            if(solver.solve(x,k)){
                answer.append(1+"\n");
            }else{
                answer.append(0+"\n");
            }
        }
        System.out.println(answer.toString());
        bufferedWriter.close();
        bufferedReader.close();
    }
}

class Solver {

    public boolean solve(int x, int k){
        boolean result = false;
        int divisor = 2;
        int count = 0;
        while(divisor*divisor<=x){
            while(x%divisor==0){
                count++;
                x=x/divisor;
            }
            divisor++;
        }
        if(x>1)count++;
        if(count>=k)result = true;
        return result;
    }
}
