import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class greedilyincreasing {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N = Integer.parseInt(in.readLine());
        String[] lineParts = in.readLine().split(" ");
        String sep = "";
        int prev = -1;
        int l = 0;
        for (int i = 0; i < lineParts.length; i++) {
            int v = Integer.parseInt(lineParts[i]);
            if (i == 0) {
                result.append(sep).append(v);
                prev = v;
                l++;
            } else {
                if (v > prev) {
                    result.append(sep).append(v);
                    prev = v;
                    l++;
                }
            }
            sep = " ";
        }
        out.write((Integer.toString(l) + "\n").getBytes());
        out.write(result.toString().getBytes());
        out.flush();
    }
}
