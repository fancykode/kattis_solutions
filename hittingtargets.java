import java.util.*;

public class hittingtargets {

    private record Rectangle(int x1, int y1, int x2, int y2) {
    }

    private record Circle(int x, int y, int r) {
    }

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int m = sc.nextInt();
        sc.nextLine();
        List<Object> targets = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            String[] lineParts = sc.nextLine().split(" ");
            if (lineParts[0].equals("rectangle")) {
                int x1 = Integer.parseInt(lineParts[1]);
                int y1 = Integer.parseInt(lineParts[2]);
                int x2 = Integer.parseInt(lineParts[3]);
                int y2 = Integer.parseInt(lineParts[4]);
                targets.add(new Rectangle(x1, y1, x2, y2));
            } else {
                int x = Integer.parseInt(lineParts[1]);
                int y = Integer.parseInt(lineParts[2]);
                int r = Integer.parseInt(lineParts[3]);
                targets.add(new Circle(x, y, r));
            }
        }
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int hits = 0;
            for (int j = 0; j < targets.size(); j++) {
                if (targets.get(j) instanceof Rectangle) {
                    Rectangle r = (Rectangle) targets.get(j);
                    if (x >= r.x1() && x <= r.x2() && y >= r.y1() && y <= r.y2()) {
                        hits++;
                    }
                } else if (targets.get(j) instanceof Circle) {
                    Circle c = (Circle) targets.get(j);
                    if ((x - c.x()) * (x - c.x()) + (y - c.y()) * (y - c.y()) <= c.r() * c.r()) {
                        hits++;
                    }
                }
            }
            System.out.println(hits);
        }
    }
}
