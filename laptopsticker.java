import java.util.*;

public class laptopsticker {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int wc = sc.nextInt();
        int hc = sc.nextInt();
        int ws = sc.nextInt();
        int hs = sc.nextInt();
        if (ws <= wc - 2 && hs <= hc - 2) {
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }
}
