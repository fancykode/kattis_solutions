import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class KattisApp {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N = Integer.parseInt(in.readLine());
        List<Integer> books = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int C = Integer.parseInt(in.readLine());
            books.add(C);
        }
        Collections.sort(books, Collections.reverseOrder());
        int minPrice = 0;
        for (int i = 0; i < books.size(); i++) {
            if ((i + 1) % 3 != 0) {
                minPrice += books.get(i);
            }
        }
        result.append(minPrice).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
