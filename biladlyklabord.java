import java.util.*;

public class biladlyklabord {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String line = sc.nextLine();
        StringBuilder result = new StringBuilder();
        char prevChar = 'A';
        for (int i = 0; i < line.length(); i++) {
            if (line.charAt(i) != prevChar) {
                result.append(line.charAt(i));
            }
            prevChar = line.charAt(i);
        }
        System.out.println(result);
    }
}
