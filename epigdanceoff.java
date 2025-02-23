import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class epigdanceoff {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        var lineParts = in.readLine().split(" ");
        int N = Integer.parseInt(lineParts[0]);
        int M = Integer.parseInt(lineParts[1]);
        char[][] grid = new char[N][M];
        for (int i = 0; i < N; i++) {
            String line = in.readLine();
            for (int j = 0; j < line.length(); j++) {
                grid[i][j] = line.charAt(j);
            }
        }
        int colNums = 0;
        for (int j = 0; j < grid[0].length; j++) {
            boolean isEmptyCol = true;
            for (int i = 0; i < grid.length; i++) {
                if (grid[i][j] != '_') {
                    isEmptyCol = false;
                    break;
                }
            }
            if (isEmptyCol) {
                colNums++;
            }
        }
        result.append(colNums + 1).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
