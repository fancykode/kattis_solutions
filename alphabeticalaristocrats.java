import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class alphabeticalaristocrats {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int n = Integer.parseInt(in.readLine());
        List<String> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(in.readLine());
        }
        list.sort((var s1, var s2) -> {
            int indx1 = -1;
            int indx2 = -1;
            for (int i = 0; i < s1.length(); i++) {
                if (Character.isUpperCase(s1.charAt(i))) {
                    indx1 = i;
                    break;
                }
            }
            for (int i = 0; i < s2.length(); i++) {
                if (Character.isUpperCase(s2.charAt(i))) {
                    indx2 = i;
                    break;
                }
            }
            String substr1 = s1.substring(indx1);
            String substr2 = s2.substring(indx2);
            return substr1.compareTo(substr2);
        });

        for (int i = 0; i < list.size(); i++) {
            result.append(list.get(i)).append("\n");
        }

        out.write(result.toString().getBytes());
        out.flush();
    }
}
