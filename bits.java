import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class App {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String X = in.readLine();
            int maxNumOneBits = 0;
            for (int j = 1; j <= X.length(); j++) {
                int t = Integer.parseInt(X.substring(0, j));
                int count = 0;
                while (t > 0) {
                    count += t & 1;
                    t >>= 1;
                }
                maxNumOneBits = Math.max(maxNumOneBits, count);
            }
            result.append(maxNumOneBits).append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
