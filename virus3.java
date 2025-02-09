import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Map;

public class virus3 {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String F = in.readLine();
        String H = in.readLine();

        int j = 0;
        boolean wasTransformed = true;
        for (int i = 0; i < F.length(); i++) {
            char ch = F.charAt(i);
            boolean found = false;
            for (; j < H.length();) {
                if (H.charAt(j) == ch) {
                    found = true;
                    j++;
                    break;
                } else {
                    j++;
                }
            }
            if (!found) {
                wasTransformed = false;
            }
        }
        if (wasTransformed) {
            result.append("Ja\n");
        } else {
            result.append("Nej\n");
        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
