import java.util.*;

public class electricaloutlets {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int K = sc.nextInt();
            int maxAppl = 0;
            for (int j = 0; j < K; j++) {
                int outlets = sc.nextInt();
                maxAppl += outlets;
                if (j != 0) {
                    maxAppl -= 1;
                }
            }
            System.out.println(maxAppl);
        }
    }
}
