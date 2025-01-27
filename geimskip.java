import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;

public class geimskip {

    private record Pos(int x, int y, int z, int r, boolean exploded) {
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N = Integer.parseInt(in.readLine());
        List<Pos> ships = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            String[] lineParts = in.readLine().split(" ");
            int x = Integer.parseInt(lineParts[0]);
            int y = Integer.parseInt(lineParts[1]);
            int z = Integer.parseInt(lineParts[2]);
            int r = Integer.parseInt(lineParts[3]);
            ships.add(new Pos(x, y, z, r, false));
        }

        int M = Integer.parseInt(in.readLine());
        List<Pos> bombs = new ArrayList<>();
        for (int i = 0; i < M; i++) {
            String[] lineParts = in.readLine().split(" ");
            int x = Integer.parseInt(lineParts[0]);
            int y = Integer.parseInt(lineParts[1]);
            int z = Integer.parseInt(lineParts[2]);
            int r = Integer.parseInt(lineParts[3]);
            bombs.add(new Pos(x, y, z, r, false));
        }

        for (int i = 0; i < ships.size(); i++) {
            int xShip = ships.get(i).x();
            int yShip = ships.get(i).y();
            int zShip = ships.get(i).z();
            int rShip = ships.get(i).r();
            for (int j = 0; j < bombs.size(); j++) {
                int xBomb = bombs.get(j).x();
                int yBomb = bombs.get(j).y();
                int zBomb = bombs.get(j).z();
                int rBomb = bombs.get(j).r();
                int xdiff = xShip - xBomb;
                int ydiff = yShip - yBomb;
                int zdiff = zShip - zBomb;

                double dist = Math.sqrt(xdiff * xdiff + ydiff * ydiff + zdiff * zdiff);
                if (!(dist > rShip + rBomb)) {
                    ships.set(i, new Pos(xShip, yShip, zShip, rShip * 2, true));
                    break;
                }
            }
        }
        while (true) {
            boolean exploded = false;
            for (int i = 0; i < ships.size(); i++) {
                if (ships.get(i).exploded()) {
                    for (int j = 0; j < ships.size(); j++) {
                        if (i != j && !ships.get(j).exploded()) {
                            int xShip1 = ships.get(i).x();
                            int yShip1 = ships.get(i).y();
                            int zShip1 = ships.get(i).z();
                            int rShip1 = ships.get(i).r();

                            int xShip2 = ships.get(j).x();
                            int yShip2 = ships.get(j).y();
                            int zShip2 = ships.get(j).z();
                            int rShip2 = ships.get(j).r();

                            int xdiff = xShip1 - xShip2;
                            int ydiff = yShip1 - yShip2;
                            int zdiff = zShip1 - zShip2;
                            double dist = Math.sqrt(xdiff * xdiff + ydiff * ydiff + zdiff * zdiff);
                            if (!(dist > rShip1 + rShip2)) {
                                ships.set(j, new Pos(xShip2, yShip2, zShip2, rShip2 * 2, true));
                                exploded = true;
                            }
                        }
                    }
                }
            }
            if (!exploded) {
                break;
            }
        }
        int k = 0;
        for (int i = 0; i < ships.size(); i++) {
            if (!ships.get(i).exploded()) {
                k++;
            }
        }
        result.append(k).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
