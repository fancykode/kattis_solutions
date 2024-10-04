import java.util.*;

public class cups {

    private record Cup(String color, int r) {
    }

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        List<Cup> cups = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            String[] lineParts = sc.nextLine().split(" ");
            if (Character.isDigit(lineParts[0].charAt(0))) { // diameter color
                cups.add(new Cup(lineParts[1], Integer.parseInt(lineParts[0]) / 2));
            } else { // color radius
                cups.add(new Cup(lineParts[0], Integer.parseInt(lineParts[1])));
            }
        }
        cups.sort(Comparator.comparingInt(Cup::r));
        for (int i = 0; i < cups.size(); i++) {
            System.out.println(cups.get(i).color());
        }
    }
}
