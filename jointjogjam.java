import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class jointjogjam {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String[] lineParts = in.readLine().split(" ");
        int Kxs = Integer.parseInt(lineParts[0]);
        int Kys = Integer.parseInt(lineParts[1]);
        int Oxs = Integer.parseInt(lineParts[2]);
        int Oys = Integer.parseInt(lineParts[3]);
        int Kxe = Integer.parseInt(lineParts[4]);
        int Kye = Integer.parseInt(lineParts[5]);
        int Oxe = Integer.parseInt(lineParts[6]);
        int Oye = Integer.parseInt(lineParts[7]);

        double dist1 = Math.sqrt((Kxs - Oxs) * (Kxs - Oxs) + (Kys - Oys) * (Kys - Oys));
        double dist2 = Math.sqrt((Kxe - Oxe) * (Kxe - Oxe) + (Kye - Oye) * (Kye - Oye));
        if (dist1 > dist2) {
            result.append(dist1).append("\n");
        } else {
            result.append(dist2).append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
