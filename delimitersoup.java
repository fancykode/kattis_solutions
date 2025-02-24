import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class delimitersoup {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        in.readLine();
        String L = in.readLine();
        List<Character> stack = new ArrayList<>();
        boolean ok = true;
        for (int i = 0; i < L.length(); i++) {
            char ch = L.charAt(i);
            if (ch == ' ') {
                continue;
            }
            if (ch == '(' || ch == '[' || ch == '{') {
                stack.add(ch);
            } else if (ch == ')' || ch == ']' || ch == '}') {
                if (stack.size() == 0) {
                    result.append(ch).append(" ").append(i).append("\n");
                    ok = false;
                    break;
                }
                char chtmp = stack.getLast();
                if (chtmp == '(' && ch == ')') {
                    stack.removeLast();
                } else if (chtmp == '[' && ch == ']') {
                    stack.removeLast();
                } else if (chtmp == '{' && ch == '}') {
                    stack.removeLast();
                } else {
                    result.append(ch).append(" ").append(i).append("\n");
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            result.append("ok so far\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
