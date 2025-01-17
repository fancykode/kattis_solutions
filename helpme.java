import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class helpme {

    private static class ChessPieces {
        List<String> kings = new ArrayList<>();
        List<String> queens = new ArrayList<>();
        List<String> rooks = new ArrayList<>();
        List<String> bishops = new ArrayList<>();
        List<String> knights = new ArrayList<>();
        List<String> pawns = new ArrayList<>();
    }

    private static void parse(String line, ChessPieces wp, ChessPieces bp, int row) {
        char col = 'a';
        for (int i = 2; i < line.length(); i += 4, col += 1) {
            char ch = line.charAt(i);
            if (ch == 'K') {
                wp.kings.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'k') {
                bp.kings.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'Q') {
                wp.queens.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'q') {
                bp.queens.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'B') {
                wp.bishops.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'b') {
                bp.bishops.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'N') {
                wp.knights.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'n') {
                bp.knights.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'P') {
                wp.pawns.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'p') {
                bp.pawns.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'R') {
                wp.rooks.add(String.valueOf(col) + String.valueOf(row));
            } else if (ch == 'r') {
                bp.rooks.add(String.valueOf(col) + String.valueOf(row));
            }
        }
    }

    private static void getResult(StringBuilder result, ChessPieces cp) {
        for (int i = 0; i < cp.kings.size(); i++) {
            result.append("K").append(cp.kings.get(i));
            if (i != cp.kings.size() - 1) {
                result.append(",");
            }
        }
        if (!cp.kings.isEmpty()) {
            result.append(",");
        }
        for (int i = 0; i < cp.queens.size(); i++) {
            result.append("Q").append(cp.queens.get(i));
            if (i != cp.queens.size() - 1) {
                result.append(",");
            }
        }
        if (!cp.queens.isEmpty()) {
            result.append(",");
        }
        for (int i = 0; i < cp.rooks.size(); i++) {
            result.append("R").append(cp.rooks.get(i));
            if (i != cp.rooks.size() - 1) {
                result.append(",");
            }
        }
        if (!cp.rooks.isEmpty()) {
            result.append(",");
        }
        for (int i = 0; i < cp.bishops.size(); i++) {
            result.append("B").append(cp.bishops.get(i));
            if (i != cp.bishops.size() - 1) {
                result.append(",");
            }
        }
        if (!cp.bishops.isEmpty()) {
            result.append(",");
        }
        for (int i = 0; i < cp.knights.size(); i++) {
            result.append("N").append(cp.knights.get(i));
            if (i != cp.knights.size() - 1) {
                result.append(",");
            }
        }
        if (!cp.knights.isEmpty()) {
            result.append(",");
        }
        for (int i = 0; i < cp.pawns.size(); i++) {
            result.append(cp.pawns.get(i));
            if (i != cp.pawns.size() - 1) {
                result.append(",");
            }
        }
    }

    static class CmpWhite implements Comparator<String> {
        public int compare(String p1, String p2) {
            int r1 = Integer.parseInt(p1.charAt(1) + "");
            int r2 = Integer.parseInt(p2.charAt(1) + "");
            if (r1 != r2) {
                return Integer.compare(r1, r2);
            }
            char c1 = p1.charAt(0);
            char c2 = p2.charAt(0);
            return Character.compare(c1, c2);
        }
    }

    static class CmpBlack implements Comparator<String> {
        public int compare(String p1, String p2) {
            int r1 = Integer.parseInt(p1.charAt(1) + "");
            int r2 = Integer.parseInt(p2.charAt(1) + "");
            if (r1 != r2) {
                return Integer.compare(r2, r1);
            }
            char c1 = p1.charAt(0);
            char c2 = p2.charAt(0);
            return Character.compare(c1, c2);
        }
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));

        ChessPieces wp = new ChessPieces();
        ChessPieces bp = new ChessPieces();
        in.readLine();
        for (int row = 8; row >= 1; row--) {
            String line = in.readLine();
            parse(line, wp, bp, row);
            in.readLine();
        }
        wp.kings.sort(new CmpWhite());
        wp.queens.sort(new CmpWhite());
        wp.rooks.sort(new CmpWhite());
        wp.bishops.sort(new CmpWhite());
        wp.knights.sort(new CmpWhite());
        wp.pawns.sort(new CmpWhite());

        bp.kings.sort(new CmpBlack());
        bp.queens.sort(new CmpBlack());
        bp.rooks.sort(new CmpBlack());
        bp.bishops.sort(new CmpBlack());
        bp.knights.sort(new CmpBlack());
        bp.pawns.sort(new CmpBlack());

        StringBuilder white = new StringBuilder();
        white.append("White: ");
        getResult(white, wp);
        if (white.charAt(white.length() - 1) == ',') {
            out.write(white.substring(0, white.length() - 1).toString().getBytes());
        } else {
            out.write(white.toString().getBytes());
        }
        out.write("\n".getBytes());
        StringBuilder black = new StringBuilder();
        black.append("Black: ");
        getResult(black, bp);
        if (black.charAt(black.length() - 1) == ',') {
            out.write(black.substring(0, black.length() - 1).toString().getBytes());
        } else {
            out.write(black.toString().getBytes());
        }
        // out.write(result.toString().getBytes());
        out.flush();
    }
}
