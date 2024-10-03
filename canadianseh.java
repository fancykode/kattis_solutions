import java.util.*;

public class canadianseh {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String line = sc.nextLine();
        if (line.endsWith("eh?")) {
            System.out.println("Canadian!");
        } else {
            System.out.println("Imposter!");
        }
    }
}
