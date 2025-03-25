import java.util.*;

public class afjormun {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < n; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < line.length(); j++) {
                char ch = line.charAt(j);
                if (j == 0) {
                    result.append(Character.toUpperCase(ch));
                } else {
                    result.append(Character.toLowerCase(ch));
                }
            }
            result.append('\n');
        }
        System.out.println(result);
    }
}
