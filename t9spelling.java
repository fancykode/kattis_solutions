import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Map;

public class t9spelling {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        int N = Integer.parseInt(in.readLine());
        String[] letters = new String[26];
        letters['a' - 'a'] = "2";
        letters['b' - 'a'] = "22";
        letters['c' - 'a'] = "222";

        letters['d' - 'a'] = "3";
        letters['e' - 'a'] = "33";
        letters['f' - 'a'] = "333";

        letters['g' - 'a'] = "4";
        letters['h' - 'a'] = "44";
        letters['i' - 'a'] = "444";

        letters['j' - 'a'] = "5";
        letters['k' - 'a'] = "55";
        letters['l' - 'a'] = "555";

        letters['m' - 'a'] = "6";
        letters['n' - 'a'] = "66";
        letters['o' - 'a'] = "666";

        letters['p' - 'a'] = "7";
        letters['q' - 'a'] = "77";
        letters['r' - 'a'] = "777";
        letters['s' - 'a'] = "7777";

        letters['t' - 'a'] = "8";
        letters['u' - 'a'] = "88";
        letters['v' - 'a'] = "888";

        letters['w' - 'a'] = "9";
        letters['x' - 'a'] = "99";
        letters['y' - 'a'] = "999";
        letters['z' - 'a'] = "9999";

        for (int i = 1; i <= N; i++) {
            String msg = in.readLine();
            StringBuilder translated = new StringBuilder();
            String prevSeq = "-";
            for (int j = 0; j < msg.length(); j++) {
                char ch = msg.charAt(j);
                String currSeq = "-";
                if (ch == ' ') {
                    currSeq = "0";
                } else {
                    currSeq = letters[ch - 'a'];
                }
                if (currSeq.charAt(0) == prevSeq.charAt(0)) {
                    translated.append(" ").append(currSeq);
                } else {
                    translated.append(currSeq);
                }
                prevSeq = currSeq;
            }
            result.append("Case #").append(i).append(": ").append(translated).append("\n");
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
