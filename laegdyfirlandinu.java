import java.util.Scanner;

public class laegdyfirlandinu {
    public static void main(String[] args) {
        var scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();

        int[][] area = new int[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                area[i][j] = scanner.nextInt();
            }
        }

        for (int i = 1; i < area.length - 1; ++i) {
            for (int j = 1; j < area[i].length - 1; ++j) {
                if (area[i][j] < area[i + 1][j] && area[i][j] < area[i - 1][j] && area[i][j] < area[i][j + 1]
                        && area[i][j] < area[i][j - 1]) {
                    System.out.println("Jebb");
                    return;
                }
            }
        }
        System.out.println("Neibb");
    }
}
