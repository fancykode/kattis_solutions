import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashSet;
import java.util.Set;

public class keywords {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int n = Integer.parseInt(in.readLine());
        Set<String> keywords = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String line = in.readLine();
            StringBuilder kw = new StringBuilder(line.length());
            for (int j = 0; j < line.length(); j++) {
                char ch = Character.toLowerCase(line.charAt(j));
                if (ch == '-') {
                    ch = ' ';
                }
                kw.append(ch);
            }
            keywords.add(kw.toString());
        }
        result.append(keywords.size()).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
