import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class bottleopening {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int n = Integer.parseInt(in.readLine());
        int k = Integer.parseInt(in.readLine());
        if (n <= k) {
            result.append("impossible\n");
        } else {
            for (int i = 2, j = 0; j < k; i++, j++) {
                result.append("open ").append(i).append(" using 1\n");
            }

        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
