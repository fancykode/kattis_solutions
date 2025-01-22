import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class sok {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();

        int A, B, C, I, J, K;
        String[] lineParts = in.readLine().split(" ");
        A = Integer.parseInt(lineParts[0]);
        B = Integer.parseInt(lineParts[1]);
        C = Integer.parseInt(lineParts[2]);
        lineParts = in.readLine().split(" ");
        I = Integer.parseInt(lineParts[0]);
        J = Integer.parseInt(lineParts[1]);
        K = Integer.parseInt(lineParts[2]);

        double t1 = A / (double) I;
        double t2 = B / (double) J;
        double t3 = C / (double) K;

        double minVal = Math.min(Math.min(t1, t2), t3);

        if (Double.compare(t1, minVal) == 0) {
            result.append(0).append(" ");
        } else {
            result.append(A - (minVal * I)).append(" ");
        }
        if (Double.compare(t2, minVal) == 0) {
            result.append(0).append(" ");
        } else {
            result.append(B - (minVal * J)).append(" ");
        }
        if (Double.compare(t3, minVal) == 0) {
            result.append(0).append("\n");
        } else {
            result.append(C - (minVal * K)).append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
