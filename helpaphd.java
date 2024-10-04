
import java.util.*;

public class helpaphd {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < N; i++) {
            String line = sc.nextLine();
            if (line.equals("P=NP")) {
                System.out.println("skipped");
            } else {
                String[] lineParts = line.split("\\+");
                int a = Integer.parseInt(lineParts[0]);
                int b = Integer.parseInt(lineParts[1]);
                System.out.println(a + b);
            }
        }
    }
}
