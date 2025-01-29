import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.ArrayList;
import java.util.List;

public class simplearithmetic {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String[] lineParts = in.readLine().split(" ");
        BigDecimal a = new BigDecimal(lineParts[0]);
        BigDecimal b = new BigDecimal(lineParts[1]);
        BigDecimal c = new BigDecimal(lineParts[2]);

        var mul = a.multiply(b);
        var rslt = mul.divide(c, 20, RoundingMode.HALF_UP);
        result.append(rslt.toString());

        out.write(result.toString().getBytes());
        out.flush();
    }
}
