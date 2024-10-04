import java.util.*;

public class karte {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String S = sc.nextLine();
        Set<Integer> P = new HashSet<>();
        Set<Integer> K = new HashSet<>();
        Set<Integer> H = new HashSet<>();
        Set<Integer> T = new HashSet<>();
        boolean error = false;
        for (int i = 0; i < S.length() - 2; i += 3) {
            char suit = S.charAt(i);
            int num = Integer.parseInt(S.charAt(i + 1) + "" + S.charAt(i + 2));
            if (suit == 'P') {
                if (P.contains(num)) {
                    error = true;
                    break;
                }
                P.add(num);
            } else if (suit == 'K') {
                if (K.contains(num)) {
                    error = true;
                    break;
                }
                K.add(num);
            } else if (suit == 'H') {
                if (H.contains(num)) {
                    error = true;
                    break;
                }
                H.add(num);
            } else if (suit == 'T') {
                if (T.contains(num)) {
                    error = true;
                    break;
                }
                T.add(num);
            }
        }
        if (error) {
            System.out.println("GRESKA");
        } else {
            int p = 0, k = 0, h = 0, t = 0;
            System.out.printf("%d %d %d %d%n", 13 - P.size(), 13 - K.size(),
                    13 - H.size(), 13 - T.size());
        }
    }
}
