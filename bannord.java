import java.util.*;

public class bannord {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String S = sc.nextLine();
        String[] Mwords = sc.nextLine().split(" ");
        Set<Character> forbLetters = new HashSet<>();
        for (int i = 0; i < S.length(); i++) {
            forbLetters.add(S.charAt(i));
        }
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < Mwords.length; i++) {
            boolean isWordForbidden = false;
            for (int j = 0; j < Mwords[i].length(); j++) {
                if (forbLetters.contains(Mwords[i].charAt(j))) {
                    isWordForbidden = true;
                    break;
                }
            }
            if (isWordForbidden) {
                result.append("*".repeat(Mwords[i].length())).append(" ");
            } else {
                result.append(Mwords[i]).append(" ");
            }
        }
        System.out.println(result.toString().stripTrailing());
    }
}
