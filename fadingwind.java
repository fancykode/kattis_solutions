import java.util.*;

public class fadingwind {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int h = sc.nextInt();
        int k = sc.nextInt();
        int v = sc.nextInt();
        int s = sc.nextInt();
        int dist = 0;
        while (h > 0) {
            v += s;
            v -= Math.max(1, v / 10);
            if (v >= k) {
                h++;
            }
            if (v > 0 && v < k) {
                h--;
                if (h == 0) {
                    v = 0;
                }
            }
            if (v <= 0) {
                h = 0;
                v = 0;
            }
            dist += v;
            if (s > 0) {
                s--;
            }
        }
        System.out.println(dist);
    }
}
