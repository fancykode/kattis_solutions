import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Map;

public class acm {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int totalTime = 0;
        int problemsSolved = 0;
        Map<Character, Integer> problemPenalty = new HashMap<>();
        while (true) {
            String[] lineParts = in.readLine().split(" ");
            int m = Integer.parseInt(lineParts[0]);
            if (m == -1) {
                break;
            }
            char problem = lineParts[1].charAt(0);

            if (lineParts[2].equals("right")) {
                totalTime += m;
                totalTime += problemPenalty.getOrDefault(problem, 0);
                problemsSolved++;
            } else {
                problemPenalty.put(problem, problemPenalty.getOrDefault(problem, 0) + 20);
            }
        }
        result.append(problemsSolved).append(" ").append(totalTime).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
