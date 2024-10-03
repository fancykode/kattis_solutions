import java.util.*;

public class herman {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int R = sc.nextInt();
        double cEucArea = Math.PI * R * R;
        double cTaxiArea = (2.0 * R) * (2.0 * R) / 2.0;
        System.out.println(cEucArea);
        System.out.println(cTaxiArea);
    }
}
