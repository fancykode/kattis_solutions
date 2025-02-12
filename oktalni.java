import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class oktalni {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String binNum = in.readLine();
        int pad = (int) Math.ceil(binNum.length() / 3.0) * 3 - binNum.length();
        if (pad != 0) {
            binNum = "0".repeat(pad) + binNum;
        }
        StringBuilder octNum = new StringBuilder();
        for (int i = 0; i < binNum.length() - 2; i += 3) {
            String group = String.valueOf(binNum.charAt(i)) + String.valueOf(binNum.charAt(i + 1))
                    + String.valueOf(binNum.charAt(i + 2));
            if (group.equals("000")) {
                octNum.append(0);
            } else if (group.equals("001")) {
                octNum.append(1);
            } else if (group.equals("010")) {
                octNum.append(2);
            } else if (group.equals("011")) {
                octNum.append(3);
            } else if (group.equals("100")) {
                octNum.append(4);
            } else if (group.equals("101")) {
                octNum.append(5);
            } else if (group.equals("110")) {
                octNum.append(6);
            } else if (group.equals("111")) {
                octNum.append(7);
            }
        }
        result.append(octNum).append("\n");
        out.write(result.toString().getBytes());
        out.flush();
    }
}
