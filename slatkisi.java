import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class slatkisi {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int K;
        String[] lineParts = in.readLine().split(" ");
        int C = Integer.parseInt(lineParts[0]);
        K = Integer.parseInt(lineParts[1]);
        K = (int) Math.pow(10, K);
        double t = C / (double) K;
        result.append(Math.round(t) * K).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
