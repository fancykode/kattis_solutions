import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class nop {

    public static int getNextProperIndex(int ci) {
        for (int i = ci;; i++) {
            if (i % 4 == 0) {
                return i;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();

        var code = new StringBuilder(in.readLine());

        int to = 0;
        boolean stop = false;
        int i = 0;
        int nopCount = 0;
        while (!stop) {
            var tmp = new StringBuilder(code.length());
            stop = true;
            for (; i < code.length(); i++) {
                char ch = code.charAt(i);
                if (Character.isUpperCase(ch)) {
                    if (i % 4 == 0) {
                        tmp.append(ch);
                    } else {
                        int indx = getNextProperIndex(i);
                        int diff = indx - i;
                        nopCount += diff;
                        tmp.append("*".repeat(diff));
                        tmp.append(code.substring(i));

                        var newCode = new StringBuilder();
                        newCode.append(code.substring(0, to));
                        newCode.append(tmp.toString());
                        code = newCode;
                        i = indx + 1;
                        to = i;
                        stop = false;
                        break;
                    }
                } else {
                    tmp.append(ch);
                }
            }
        }

        result.append(nopCount).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
