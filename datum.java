import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.format.TextStyle;
import java.util.*;

public class datum {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int D = sc.nextInt();
        int M = sc.nextInt();
        String dayOfTheWeek = LocalDate.parse(String.format("%d/%d/2009", D, M), DateTimeFormatter.ofPattern("d/M/uuuu"))
                .getDayOfWeek()
                .getDisplayName(TextStyle.FULL, Locale.US);
        System.out.println(dayOfTheWeek);
    }
}
