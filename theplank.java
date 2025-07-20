import java.util.*;

public class theplank {

    private static int calc(int currLen, int maxLen) {
        if (currLen > maxLen) {
            return 0;
        }
        if (currLen == maxLen) {
            return 1;
        }
        int r1 = calc(currLen + 1, maxLen);
        int r2 = calc(currLen + 2, maxLen);
        int r3 = calc(currLen + 3, maxLen);
        return r1 + r2 + r3;
    }

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ways = calc(0, n);
        System.out.println(ways);
    }
}
