import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class maptiles2 {

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        String quadkey = in.readLine();
        int x = 0, y = 0;
        for (int i = 0; i < quadkey.length(); i++) {
            x += x;
            y += y;
            switch (quadkey.charAt(i)) {
            case '1':
                x++;
                break;
            case '2':
                y++;
                break;
            case '3':
                x++;
                y++;
                break;
            }            
        }
        System.out.println(quadkey.length() + " " + x + " " + y);
        in.close();
    }
}
