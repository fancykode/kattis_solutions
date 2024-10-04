import java.util.*;

public class goatrope {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();

        if (x >= x1 && x <= x2) {
            System.out.println((double) Math.min(Math.abs(y - y2), Math.abs(y - y1)));
        } else if (y >= y1 && y <= y2) {
            System.out.println((double) Math.min(Math.abs(x - x2), Math.abs(x - x1)));
        } else {
            double[] dist = new double[4];
            dist[0] = Math.sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
            dist[1] = Math.sqrt((x - x2) * (x - x2) + (y - y1) * (y - y1));
            dist[2] = Math.sqrt((x - x1) * (x - x1) + (y - y2) * (y - y2));
            dist[3] = Math.sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
            Arrays.sort(dist);
            System.out.println(dist[0]);
        }
    }
}
