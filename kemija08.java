import java.util.*;

public class kemija08 {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String line = sc.nextLine();
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < line.length(); ) {
            char ch = line.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                result.append(ch);
                i += 3;
            } else {
                result.append(ch);
                i++;
            }
        }
        System.out.println(result);
    }
}
