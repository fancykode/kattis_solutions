import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class ordinals {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int n = Integer.parseInt(in.readLine());
        List<String> repr = new ArrayList<>();
        repr.add("{}");
        repr.add("{{}}");
        repr.add("{{},{{}}}");
        for (int i = 3; i <= 8; i++) {
            StringBuilder tmp = new StringBuilder();
            tmp.append("{");
            String sep = "";
            for (int j = 0; j < i; j++) {
                tmp.append(sep).append(repr.get(j));
                sep = ",";
            }
            tmp.append("}");
            repr.add(tmp.toString());
        }
        result.append(repr.get(n)).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
