import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.LinkedList;
import java.util.Queue;

public class KattisApp {

    private record Pos(int i, int j) {

    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String[] lineParts = in.readLine().split(" ");
        int m = Integer.parseInt(lineParts[0]);
        int n = Integer.parseInt(lineParts[1]);
        char[][] img = new char[m + 2][n + 2];

        for (int i = 0; i < img.length; i++) {
            for (int j = 0; j < img[i].length; j++) {
                img[i][j] = '.';
            }
        }
        for (int i = 0; i < m; i++) {
            String line = in.readLine();
            for (int j = 0; j < line.length(); j++) {
                img[i + 1][j + 1] = line.charAt(j);

            }
        }
        Queue<Pos> queue = new LinkedList<>();
        int counter = 0;
        for (int i = 0; i < img.length; i++) {
            for (int j = 0; j < img[i].length; j++) {
                if (img[i][j] == '#') {
                    counter++;
                    queue.add(new Pos(i, j));
                    while (!queue.isEmpty()) {
                        var pos = queue.poll();
                        int pi = pos.i();
                        int pj = pos.j();
                        img[pi][pj] = '*';
                        if (img[pi - 1][pj] == '#') {
                            queue.add(new Pos(pi - 1, pj));
                        }
                        if (img[pi + 1][pj] == '#') {
                            queue.add(new Pos(pi + 1, pj));
                        }
                        if (img[pi][pj - 1] == '#') {
                            queue.add(new Pos(pi, pj - 1));
                        }
                        if (img[pi][pj + 1] == '#') {
                            queue.add(new Pos(pi, pj + 1));
                        }
                        if (img[pi + 1][pj - 1] == '#') {
                            queue.add(new Pos(pi + 1, pj - 1));
                        }
                        if (img[pi + 1][pj + 1] == '#') {
                            queue.add(new Pos(pi + 1, pj + 1));
                        }
                        if (img[pi - 1][pj - 1] == '#') {
                            queue.add(new Pos(pi - 1, pj - 1));
                        }
                        if (img[pi - 1][pj + 1] == '#') {
                            queue.add(new Pos(pi - 1, pj + 1));
                        }
                    }
                }
            }
        }
        result.append(counter).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
