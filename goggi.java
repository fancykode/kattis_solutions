import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class goggi {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String[] lineParts = in.readLine().split("\\?");
        int a = Integer.parseInt(lineParts[0].strip());
        int b = Integer.parseInt(lineParts[1].strip());
        if (a > b) {
            result.append(">\n");
        } else if (a < b) {
            result.append("<\n");
        } else {
            result.append("Goggi svangur!\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
