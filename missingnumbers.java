import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashSet;
import java.util.Set;

public class missingnumbers {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();

        int n = Integer.parseInt(in.readLine());
        Set<Integer> nums = new HashSet<>();
        int maxNum = 0;
        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(in.readLine());
            maxNum = Math.max(maxNum, num);
            nums.add(num);
        }
        boolean missed = false;
        for (int i = 1; i <= maxNum; i++) {
            if (!nums.contains(i)) {
                result.append(i).append("\n");
                missed = true;
            }
        }
        if (!missed) {
            result.append("good job\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
