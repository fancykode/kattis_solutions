import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class meanwords {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N = Integer.parseInt(in.readLine());
        List<String> words = new ArrayList<>();
        int maxLen = 0;
        for (int i = 0; i < N; i++) {
            String w = in.readLine();
            maxLen = Math.max(maxLen, w.length());
            words.add(w);
        }
        for (int j = 0; j < maxLen; j++) {
            int sum = 0;
            int n = 0;
            for (int i = 0; i < words.size(); i++) {
                if (j < words.get(i).length()) {
                    sum += words.get(i).charAt(j);
                    n++;
                }
            }
            char avrg = (char) (sum / n);
            result.append(avrg);
        }
        result.append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
