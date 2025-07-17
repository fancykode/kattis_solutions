import java.util.*;

public class moderatepace {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] yourDistances = new int[n];
        int[] c1Distances = new int[n];
        int[] c2Distances = new int[n];

        for (int i = 0; i < n; i++) {
            yourDistances[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            c1Distances[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            c2Distances[i] = sc.nextInt();
        }

        int[] tmp = new int[3];
        StringBuilder result = new StringBuilder();
        String sep = "";
        for (int i = 0; i < n; i++) {
            tmp[0] = yourDistances[i];
            tmp[1] = c1Distances[i];
            tmp[2] = c2Distances[i];
            Arrays.sort(tmp);
            result.append(sep).append(String.valueOf(tmp[1]));
            sep = " ";
        }
        System.out.println(result);
    }
}
