import java.util.*;

public class elevatingtheprank {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int N = sc.nextInt();
        Set<Integer> floorsStop = new HashSet<>();
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            floorsStop.add(a);
        }
        int seconds = 0;
        int from = Math.min(A, B);
        int to = Math.max(A, B);
        for (int i = from; i <= to; i++) {
            if (i != from && i != to && floorsStop.contains(i)) {
                seconds += 10;
            }
            seconds += 4;
        }
        System.out.println(seconds - 4);
    }
}
