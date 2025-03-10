import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class euclidsalgorithm {

    private static long gcd(long a, long b) {
        long ta = Math.max(a, b);
        long tb = Math.min(a, b);
        while (tb != 0) {
            long r = ta % tb;
            ta = tb;
            tb = r;
        }
        return ta;
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String[] lineParts = in.readLine().split(" ");
        long a = Long.parseLong(lineParts[0]);
        long b = Long.parseLong(lineParts[1]);
        result.append(gcd(a, b)).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
