import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.Arrays;

public class egypt {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        while (true) {
            var lineParts = in.readLine().split(" ");
            int[] sides = new int[3];
            sides[0] = Integer.parseInt(lineParts[0]);
            sides[1] = Integer.parseInt(lineParts[1]);
            sides[2] = Integer.parseInt(lineParts[2]);
            if (sides[0] == 0 && sides[1] == 0 && sides[2] == 0) {
                break;
            }
            Arrays.sort(sides);
            if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
                result.append("right\n");
            } else {
                result.append("wrong\n");
            }
        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
