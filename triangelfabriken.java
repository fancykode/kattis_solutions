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

        int a = Integer.parseInt(in.readLine());
        int b = Integer.parseInt(in.readLine());
        int c = Integer.parseInt(in.readLine());

        if (a > 90 || b > 90 || c > 90) {
            result.append("Trubbig Triangel\n");
        } else if (a < 90 && b < 90 && c < 90) {
            result.append("Spetsig Triangel\n");
        } else if (a == 90 || b == 90 || c == 90) {
            result.append("Ratvinklig Triangel\n");
        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
