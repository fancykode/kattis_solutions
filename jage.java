import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashSet;
import java.util.Set;
import java.util.TreeSet;

public class jage {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N, M;
        String[] lineParts = in.readLine().split(" ");
        N = Integer.parseInt(lineParts[0]);
        M = Integer.parseInt(lineParts[1]);

        String[] names = in.readLine().split(" ");
        Set<String> hunters = new HashSet<>();
        Set<String> cheated = new TreeSet<>();
        hunters.add(names[0]);
        for (int i = 0; i < M; i++) {
            lineParts = in.readLine().split(" ");
            if (hunters.contains(lineParts[0])) {
                hunters.remove(lineParts[0]);
                hunters.add(lineParts[2]);
            } else {
                cheated.add(lineParts[0]);
                hunters.add(lineParts[2]);
            }
        }
        result.append(cheated.size()).append("\n");

        String sep = "";
        for (String name : cheated) {
            result.append(sep).append(name);
            sep = " ";
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
