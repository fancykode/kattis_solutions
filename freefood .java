import java.util.*;

public class freefood {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        Set<Integer> freeFoodDays = new HashSet<>();
        for (int i = 0; i < N; i++) {
            int s = sc.nextInt();
            int t = sc.nextInt();
            for (int j = s; j <= t; ++j) {
                freeFoodDays.add(j);
            }
        }
        System.out.println(freeFoodDays.size());
    }
}
