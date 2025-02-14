import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class keytocrypto {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String ctext = in.readLine();
        String secret = in.readLine();

        String key = secret;
        StringBuilder text = new StringBuilder();
        int i = 0;
        String newKey = "";
        boolean stop = false;
        while (!stop) {
            stop = true;
            for (int j = 0; j < key.length() && i < ctext.length(); j++, i++) {
                int ch = (int) (ctext.charAt(i) - 'A') - (int) (key.charAt(j) - 'A');
                if (ch < 0) {
                    ch = 26 + ch;
                }
                newKey += (char) (ch + 'A');
                text.append((char) (ch + 'A'));
                stop = false;
            }
            key = newKey;
            newKey = "";
        }
        result.append(text).append("\n");

        out.write(result.toString().getBytes());
        out.flush();
    }
}
