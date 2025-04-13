import java.util.*;

public class fallingsnow2 {

    private static void printGrid(char[][] grid) {
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[i].length; j++) {
                System.out.print(grid[i][j]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        char[][] grid = new char[N][M];
        for (int i = 0; i < N; i++) {
            String line = sc.next();
            for (int j = 0; j < line.length(); j++) {
                grid[i][j] = line.charAt(j);
            }
        }
        for (int i = grid.length - 1; i >= 0; i--) {
            for (int j = 0; j < grid[i].length; j++) {
                if (grid[i][j] == 'S') {
                    boolean found = false;
                    int ii;
                    for (ii = i + 1; ii < grid.length; ii++) {
                        if (grid[ii][j] == 'S') {
                            grid[i][j] = '.';
                            grid[ii - 1][j] = 'S';
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        grid[i][j] = '.';
                        grid[ii - 1][j] = 'S';
                    }
                }
            }
        }
        printGrid(grid);
    }
}
