import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class KattisApp {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();

        String line = in.readLine();
        String msg = line.substring(2);
        if (line.charAt(0) == 'E') {
            for (int i = 0; i < msg.length(); i++) {
                char ch = msg.charAt(i);
                int num = 0;
                for (int j = i; j < msg.length(); j++) {
                    if (msg.charAt(j) == ch) {
                        num++;
                        i = j;
                    } else {
                        break;
                    }
                }
                result.append(ch).append(num);
            }
        } else {
            for (int i = 0; i < msg.length(); i++) {
                char ch = msg.charAt(i);
                int num = Integer.parseInt(msg.charAt(i + 1) + "");
                result.append((ch + "").repeat(num));
                i++;
            }
        }
        result.append('\n');
        out.write(result.toString().getBytes());
        out.flush();
    }
}
