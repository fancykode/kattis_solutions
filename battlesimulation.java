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

        String line = in.readLine();
        for (int i = 0; i < line.length();) {
            char m1 = line.charAt(i);
            if (i < line.length() - 2) {
                char m2 = line.charAt(i + 1);
                char m3 = line.charAt(i + 2);
                if ((m1 == 'R' && m2 == 'B' && m3 == 'L') || (m1 == 'R' && m2 == 'L' && m3 == 'B')
                        || (m1 == 'B' && m2 == 'R' && m3 == 'L') || (m1 == 'B' && m2 == 'L' && m3 == 'R')
                        || (m1 == 'L' && m2 == 'R' && m3 == 'B') || (m1 == 'L' && m2 == 'B' && m3 == 'R')) {
                    result.append('C');
                    i += 3;
                    continue;
                }
                if (m1 == 'R') {
                    result.append('S');
                } else if (m1 == 'B') {
                    result.append('K');
                } else if (m1 == 'L') {
                    result.append('H');
                }
                i++;
                continue;
            }
            if (m1 == 'R') {
                result.append('S');
            } else if (m1 == 'B') {
                result.append('K');
            } else if (m1 == 'L') {
                result.append('H');
            }
            i++;
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
