import java.util.*;

public class bus {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {
            int k = sc.nextInt();
            int busPassengers = 1;
            for (int j = 1; j < k; j++) {
                busPassengers = busPassengers * 2 + 1;
            }
            System.out.println(busPassengers);
        }
    }
}
