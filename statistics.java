import java.util.*;

public class statistics {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int caseNum = 0;
        while (sc.hasNextLine()) {
            String[] lineParts = sc.nextLine().split(" ");
            int n = Integer.parseInt(lineParts[0]);
            int min = Integer.MAX_VALUE;
            int max = Integer.MIN_VALUE;
            for (int i = 1; i <= n; i++) {
                int a = Integer.parseInt(lineParts[i]);
                min = Math.min(a, min);
                max = Math.max(a, max);
            }
            caseNum++;
            System.out.printf("Case %d: %d %d %d%n", caseNum, min, max, max - min);
        }
    }
}
