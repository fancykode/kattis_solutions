import java.util.*;

public class numberfun {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if (a + b == c || a - b == c || b - a == c || a * b == c ||
                    (a % b == 0 && a / b == c) || (b % a == 0 && b / a == c)) {
                System.out.println("Possible");
            } else {
                System.out.println("Impossible");
            }
        }
    }
}
