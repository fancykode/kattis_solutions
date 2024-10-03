import java.util.*;

public class jabuke {

    private static double triangleArea(int x1, int y1, int x2, int y2, int x3, int y4) {
        return Math.abs((y2 - y4) * x1 + x2 * (y4 - y1) + x3 * (y1 - y2)) / 2.0;
    }

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        int x3 = sc.nextInt();
        int y3 = sc.nextInt();
        int N = sc.nextInt();
        double area = triangleArea(x1, y1, x2, y2, x3, y3);
        int count = 0;
        for (int i = 0; i < N; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            double a1 = triangleArea(x1, y1, x2, y2, x, y);
            double a2 = triangleArea(x2, y2, x, y, x3, y3);
            double a3 = triangleArea(x1, y1, x, y, x3, y3);
            if (Double.compare(area, a1 + a2 + a3) == 0) {
                count++;
            }
        }
        System.out.println(String.format("%.1f", area));
        System.out.println(count);
    }
}
