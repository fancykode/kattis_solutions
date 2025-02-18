import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class imageprocessing {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        var lineParts = in.readLine().split(" ");
        int H = Integer.parseInt(lineParts[0]);
        int W = Integer.parseInt(lineParts[1]);
        int N = Integer.parseInt(lineParts[2]);
        int M = Integer.parseInt(lineParts[3]);
        int[][] img = new int[H][W];
        int[][] kernel = new int[N][M];

        for (int i = 0; i < img.length; i++) {
            lineParts = in.readLine().split(" ");
            for (int j = 0; j < img[i].length; j++) {
                int t = Integer.parseInt(lineParts[j]);
                img[i][j] = t;
            }
        }
        for (int i = 0; i < kernel.length; i++) {
            lineParts = in.readLine().split(" ");
            for (int j = 0; j < kernel[i].length; j++) {
                int t = Integer.parseInt(lineParts[j]);
                kernel[i][j] = t;
            }
        }

        String sep;
        for (int i = 0; i <= img.length - kernel.length; i++) {
            sep = "";
            for (int j = 0; j <= img[0].length - kernel[0].length; j++) {
                int val = 0;
                for (int ki = kernel.length - 1, ii = i; ki >= 0; ki--, ii++) {
                    for (int kj = kernel[0].length - 1, jj = j; kj >= 0; kj--, jj++) {
                        int t = kernel[ki][kj] * img[ii][jj];
                        val += t;
                    }
                }
                result.append(sep).append(val);
                sep = " ";
            }
            result.append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
