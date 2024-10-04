import java.util.*;

public class romans {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        double X = sc.nextDouble();
        int romanPaces = (int)Math.round(1000.0 *(5280.0 / 4854.0) * X);
        System.out.println(romanPaces);
    }
}
