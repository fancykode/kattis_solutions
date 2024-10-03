import java.util.*;

public class pizza2 {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        double pizzaArea = Math.PI * R * R;
        double pizzaWithoutCrustArea = Math.PI * (R - C) * (R - C);
        System.out.println(100.0 * pizzaWithoutCrustArea / pizzaArea);
    }
}
