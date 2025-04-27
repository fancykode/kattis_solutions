import java.util.*;

public class parking2 {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] positions = new int[n];
            for (int j = 0; j < n; j++) {
                positions[j] = sc.nextInt();
            }
            Arrays.sort(positions);
            int dist = 0;
            for (int j = 0; j < positions.length - 1; j++) {
                int diff = positions[j + 1] - positions[j];
                dist += diff;
            }
            System.out.println(dist * 2);
        }
    }
}
