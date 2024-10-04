import java.util.*;

public class synchronizinglists {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        while (true) {
            int n = sc.nextInt();
            if (n == 0) {
                break;
            }
            List<Integer> l1Sorted = new ArrayList<>();
            List<Integer> l1Original = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                int a = sc.nextInt();
                l1Sorted.add(a);
                l1Original.add(a);
            }
            List<Integer> l2Sorted = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                l2Sorted.add(sc.nextInt());
            }
            l1Sorted.sort(Comparator.naturalOrder());
            l2Sorted.sort(Comparator.naturalOrder());
            Map<Integer, Integer> m = new HashMap<>();
            for (int i = 0; i < l1Sorted.size(); i++) {
                m.put(l1Sorted.get(i), l2Sorted.get(i));
            }
            for (int i = 0; i < l1Original.size(); i++) {
                System.out.println(m.get(l1Original.get(i)));
            }
            System.out.println();
        }
    }
}
