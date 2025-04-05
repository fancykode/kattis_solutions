import java.util.*;

public class treirad {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        int tripletsCount = 0;
        for (int i = 1;; i++) {
            int t = i * (i + 1) * (i + 2);
            if (t >= N) {
                break;
            }
            if (t < N) {
                tripletsCount++;
            }
        }
        System.out.println(tripletsCount);
    }
}
