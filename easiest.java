import java.util.*;

public class easiest {

    private static int digitsSum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        while (true) {
            int N = sc.nextInt();
            if (N == 0) {
                break;
            }
            int digitsSumN = digitsSum(N);
            for (int p = 11;; p++) {
                int digitsSumPN = digitsSum(p * N);
                if (digitsSumN == digitsSumPN) {
                    System.out.println(p);
                    break;
                }
            }
        }
    }
}
