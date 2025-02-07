import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class busassignment {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int n = Integer.parseInt(in.readLine());
        int capacity = 0;
        int bus = 0;
        for (int i = 0; i < n; i++) {
            String[] lineParts = in.readLine().split(" ");
            int a = Integer.parseInt(lineParts[0]);
            int b = Integer.parseInt(lineParts[1]);
            bus -= a;
            bus += b;
            capacity = Math.max(capacity, bus);
        }
        result.append(capacity).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
