import java.util.*;

public class tri {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (a + b == c) {
            System.out.printf("%d+%d=%d%n", a, b, c);
        } else if (a - b == c) {
            System.out.printf("%d-%d=%d%n", a, b, c);
        } else if (a * b == c) {
            System.out.printf("%d*%d=%d%n", a, b, c);
        } else if (a % b == 0 && a / b == c) {
            System.out.printf("%d/%d=%d%n", a, b, c);
        } else if (b + c == a) {
            System.out.printf("%d=%d+%d%n", a, b, c);
        } else if (b - c == a) {
            System.out.printf("%d=%d-%d%n", a, b, c);
        } else if (b * c == a) {
            System.out.printf("%d=%d*%d%n", a, b, c);
        } else if (b % c == 0 && b / c == a) {
            System.out.printf("%d=%d/%d%n", a, b, c);
        }
    }
}
