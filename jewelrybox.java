import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class jewelrybox {
    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        StringBuilder result = new StringBuilder();

        int T = Integer.parseInt(in.readLine());

        for (int i = 0; i < T; i++) {
            String[] lineParts = in.readLine().split(" ");
            int X = Integer.parseInt(lineParts[0]);
            int Y = Integer.parseInt(lineParts[1]);

            double D = 16 * (X + Y) * (X + Y) - 48 * X * Y;
            double h1 = (4 * (X + Y) + Math.sqrt(D)) / 24.0;
            double h2 = (4 * (X + Y) - Math.sqrt(D)) / 24.0;
           
            double v1 = h1 * (Y - 2 * h1) * (X - 2 * h1);
            double v2 = h2 * (Y - 2 * h2) * (X - 2 * h2);
          
            result.append(Math.max(v1, v2)).append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
