import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class exam {

    public record Answer(boolean you, boolean friend, int v) {
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int k = Integer.parseInt(in.readLine());
        String you = in.readLine();
        String friend = in.readLine();

        int correct = 0;
        List<Answer> answers = new ArrayList<>();
        for (int i = 0; i < you.length(); i++) {
            char y = you.charAt(i);
            char f = friend.charAt(i);
            int v = (y == f ? 0 : 1);
            answers.add(new Answer(y == 'T', f == 'T', v));
        }
        answers.sort((var a1, var a2) -> {
            return Integer.compare(a1.v(), a2.v());
        });

        for (int i = 0; i < answers.size(); i++) {
            if (answers.get(i).friend() == answers.get(i).you()) {
                if (k > 0) {
                    k--;
                    correct++;
                }
            } else {
                if (k > 0) {
                    k--;
                } else {
                    correct++;
                }
            }
        }
        result.append(correct).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
