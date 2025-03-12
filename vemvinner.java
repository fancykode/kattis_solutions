import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class vemvinner {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        char[][] grid = new char[3][3];
        for (int i = 0; i < grid.length; i++) {
            String line = in.readLine();

            for (int j = 0, k = 0; j < line.length(); j++) {
                if (line.charAt(j) != ' ') {
                    grid[i][k] = line.charAt(j);
                    k++;
                }
            }
        }
        String winner = "";
        if (grid[0][0] != '_' && grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2]) {
            if (grid[0][0] == 'X') {
                winner = "Johan";
            } else if (grid[0][0] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[1][0] != '_' && grid[1][0] == grid[1][1] && grid[1][0] == grid[1][2]) {
            if (grid[1][0] == 'X') {
                winner = "Johan";
            } else if (grid[1][0] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[2][0] != '_' && grid[2][0] == grid[2][1] && grid[2][0] == grid[2][2]) {
            if (grid[2][0] == 'X') {
                winner = "Johan";
            } else if (grid[2][0] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[0][0] != '_' && grid[0][0] == grid[1][0] && grid[0][0] == grid[2][0]) {
            if (grid[0][0] == 'X') {
                winner = "Johan";
            } else if (grid[0][0] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[0][1] != '_' && grid[0][1] == grid[1][1] && grid[0][1] == grid[2][1]) {
            if (grid[0][1] == 'X') {
                winner = "Johan";
            } else if (grid[0][1] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[0][2] != '_' && grid[0][2] == grid[1][2] && grid[0][2] == grid[2][2]) {
            if (grid[0][2] == 'X') {
                winner = "Johan";
            } else if (grid[0][2] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[0][0] != '_' && grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2]) {
            if (grid[0][0] == 'X') {
                winner = "Johan";
            } else if (grid[0][0] == 'O') {
                winner = "Abdullah";
            }
        } else if (grid[2][0] != '_' && grid[2][0] == grid[1][1] && grid[2][0] == grid[0][2]) {
            if (grid[2][0] == 'X') {
                winner = "Johan";
            } else if (grid[2][0] == 'O') {
                winner = "Abdullah";
            }
        } else {
            winner = "ingen";
        }
        result.append(winner).append(" har vunnit\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
