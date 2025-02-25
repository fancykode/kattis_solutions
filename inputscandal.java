import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class inputscandal {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String line;
        int linesNum = 0;
        StringBuilder lines = new StringBuilder();
        while ((line = in.readLine()) != null) {
            lines.append(line).append("\n");
            linesNum++;
        }
        result.append(linesNum).append("\n");
        result.append(lines);
        out.write(result.toString().getBytes());
        out.flush();
    }
}
