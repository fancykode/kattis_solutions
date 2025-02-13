import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Map;

public class KattisApp {

    public static int findM(int L) {
        for (int i = 1; i <= L; i++) {
            if (L <= i * i) {
                return i * i;
            }
        }
        return -1;
    }

    public static int rotate(int x, int y, int w, int rotation) {
        switch (rotation) {
        case 0:
            return y * w + x; // 0 degrees
        case 1:
            return y + (w - 1) * w - w * x; // 90 degrees
        default:
            return -1;
        }
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N = Integer.parseInt(in.readLine());
        for (int t = 0; t < N; t++) {
            String msg = in.readLine();
            int L = msg.length();
            int M = findM(L);
            int K = (int) Math.sqrt(M);
            String msgPaded = msg + "*".repeat(M - L);
            StringBuilder secretMsg = new StringBuilder();
            for (int i = 0; i < K; i++) {
                for (int j = 0; j < K; j++) {
                    int indx = rotate(j, i, K, 1);
                    char ch = msgPaded.charAt(indx);
                    if (ch != '*') {
                        secretMsg.append(ch);
                    }
                }
            }
            result.append(secretMsg).append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
