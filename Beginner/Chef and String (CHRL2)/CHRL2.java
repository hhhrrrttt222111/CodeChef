import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String input = reader.readLine();
        int a = 0, b = 0, c = 0, d = 0;
        for(char ch : input.toCharArray()){
            switch(ch){
                case 'C':
                    a++;
                    break;
                case 'H':
                    if(b<a)b++;
                    break;
                case 'E':
                    if(c<b)c++;
                    break;
                case 'F':
                    if(d<c)d++;
                    break;
            }
        }
        System.out.println(d + "\n");
    }
}
