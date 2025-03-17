import java.util.*;

public class symmetricorder {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int setCount = 0;
        while (true) {
            int n = sc.nextInt();
            if (n == 0) {
                break;
            }
            setCount++;
            sc.nextLine();
            List<String> p1 = new ArrayList<>();
            List<String> p2 = new ArrayList<>();
            boolean isFirstTurn = true;
            for (int i = 0; i < n; i++) {
                if (isFirstTurn) {
                    p1.add(sc.nextLine());
                    isFirstTurn = false;
                } else {
                    p2.add(sc.nextLine());
                    isFirstTurn = true;
                }
            }
            Collections.reverse(p2);
            System.out.println("SET " + setCount);
            for (int i = 0; i < p1.size(); i++) {
                System.out.println(p1.get(i));
            }
            for (int i = 0; i < p2.size(); i++) {
                System.out.println(p2.get(i));
            }
        }
    }
}
