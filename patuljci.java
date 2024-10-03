import java.util.*;

public class patuljci {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int sum = 0;
        List<Integer> allDwarves = new ArrayList<>();
        for (int i = 0; i < 9; i++) {
            int n = sc.nextInt();
            allDwarves.add(n);
            sum += n;
        }
        int diff = sum - 100;
        int ci1 = -1, ci2 = -1;
        outerloop:
        for (int i = 0; i < allDwarves.size(); i++) {
            for (int j = 0; j < allDwarves.size(); j++) {
                if (i != j) {
                    if (diff == allDwarves.get(i) + allDwarves.get(j)) {
                        ci1 = i;
                        ci2 = j;
                        break outerloop;
                    }
                }
            }
        }
        for (int i = 0; i < allDwarves.size(); i++) {
            if (i != ci1 && i != ci2) {
                System.out.println(allDwarves.get(i));
            }
        }
    }
}
