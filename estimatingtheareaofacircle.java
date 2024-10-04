import java.util.*;

public class estimatingtheareaofacircle {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        while (true) {
            double r = sc.nextDouble();
            int m = sc.nextInt();
            int c = sc.nextInt();
            if (r == 0.0 && m == 0 && c == 0) {
                break;
            }
            double trueArea = Math.PI * r * r;
            double sqArea = (r * 2) * (r * 2);
            double cArea = sqArea * ((double) c / m);
            System.out.println(trueArea + " " + cArea);
        }
    }
}
