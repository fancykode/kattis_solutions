import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class abc {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        var lineParts = in.readLine().split(" ");
        int[] nums = new int[3];
        nums[0] = Integer.parseInt(lineParts[0]);
        nums[1] = Integer.parseInt(lineParts[1]);
        nums[2] = Integer.parseInt(lineParts[2]);
        Arrays.sort(nums);
        int A = nums[0];
        int B = nums[1];
        int C = nums[2];
        lineParts = in.readLine().split("");
        if (lineParts[0].charAt(0) == 'A') {
            result.append(A).append(" ");
            if (lineParts[1].charAt(0) == 'B') {
                result.append(B).append(" ").append(C).append("\n");
            } else if (lineParts[1].charAt(0) == 'C') {
                result.append(C).append(" ").append(B).append("\n");
            }
        } else if (lineParts[0].charAt(0) == 'B') {
            result.append(B).append(" ");
            if (lineParts[1].charAt(0) == 'A') {
                result.append(A).append(" ").append(C).append("\n");
            } else if (lineParts[1].charAt(0) == 'C') {
                result.append(C).append(" ").append(A).append("\n");
            }

        } else if (lineParts[0].charAt(0) == 'C') {
            result.append(C).append(" ");
            if (lineParts[1].charAt(0) == 'B') {
                result.append(B).append(" ").append(A).append("\n");
            } else if (lineParts[1].charAt(0) == 'A') {
                result.append(A).append(" ").append(B).append("\n");
            }
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
