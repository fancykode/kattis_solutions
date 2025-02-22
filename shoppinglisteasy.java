import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class shoppinglisteasy {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        var lineParts = in.readLine().split(" ");
        int n = Integer.parseInt(lineParts[0]);
        Set<String> intersect = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String line = in.readLine();
            var words = line.split(" ");
            Set<String> slist = new HashSet<>();
            for (var word : words) {
                slist.add(word);
            }
            if (i == 0) {
                intersect.addAll(slist);
            } else {
                intersect.retainAll(slist);
            }
        }
        List<String> items = new ArrayList<>(intersect);
        Collections.sort(items);
        result.append(items.size()).append("\n");
        for (var item : items) {
            result.append(item).append("\n");
        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
