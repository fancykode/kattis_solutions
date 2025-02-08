import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Map;

public class reverserot {

    public static int getIndex(char ch) {
        if (ch == '.') {
            return 27;
        } else if (ch == '_') {
            return 26;
        } else {
            return ch - 'A';
        }
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();

        String abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

        while (true) {
            String[] lineParts = in.readLine().split(" ");
            int N = Integer.parseInt(lineParts[0]);
            if (N == 0) {
                break;
            }
            String msgRev = new StringBuilder(lineParts[1]).reverse().toString();
            char[] encrypted = new char[msgRev.length()];
            for (int i = 0; i < msgRev.length(); i++) {
                char ch = msgRev.charAt(i);
                int indx = (getIndex(ch) + N) % abc.length();
                encrypted[i] = abc.charAt(indx);
            }
            result.append(encrypted).append("\n");
        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
