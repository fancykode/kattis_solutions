import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class raggedright {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String line;
        List<String> lines = new ArrayList<>();
        int maxLen = 0;
        while ((line = in.readLine()) != null) {
            lines.add(line);
            maxLen = Math.max(maxLen, line.length());
        }
        int score = 0;
        for (int i = 0; i < lines.size() - 1; i++) {
            int m = lines.get(i).length();
            score += (maxLen - m) * (maxLen - m);
        }
        result.append(score).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
