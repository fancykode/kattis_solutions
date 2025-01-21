import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;

public class empleh {

    static int getCol(char c) {
        switch (c) {
        case 'a':
            return 0;
        case 'b':
            return 1;
        case 'c':
            return 2;
        case 'd':
            return 3;
        case 'e':
            return 4;
        case 'f':
            return 5;
        case 'g':
            return 6;
        case 'h':
            return 7;
        default:
            return -1;
        }
    }

    static int getRow(char r) {
        switch (r) {
        case '1':
            return 7;
        case '2':
            return 6;
        case '3':
            return 5;
        case '4':
            return 4;
        case '5':
            return 3;
        case '6':
            return 2;
        case '7':
            return 1;
        case '8':
            return 0;
        default:
            return -1;
        }
    }

    static void fillChessboard(char[][] chessBoard, String[] pieces, char color) {
        for (int i = 0; i < pieces.length; i++) {
            char ch = pieces[i].charAt(0);
            if (ch == 'K') {
                int col = getCol(pieces[i].charAt(1));
                int row = getRow(pieces[i].charAt(2));
                chessBoard[row][col] = color == 'w' ? 'K' : 'k';

            } else if (ch == 'Q') {
                int col = getCol(pieces[i].charAt(1));
                int row = getRow(pieces[i].charAt(2));
                chessBoard[row][col] = color == 'w' ? 'Q' : 'q';
            } else if (ch == 'R') {
                int col = getCol(pieces[i].charAt(1));
                int row = getRow(pieces[i].charAt(2));
                chessBoard[row][col] = color == 'w' ? 'R' : 'r';

            } else if (ch == 'B') {
                int col = getCol(pieces[i].charAt(1));
                int row = getRow(pieces[i].charAt(2));
                chessBoard[row][col] = color == 'w' ? 'B' : 'b';

            } else if (ch == 'N') {
                int col = getCol(pieces[i].charAt(1));
                int row = getRow(pieces[i].charAt(2));
                chessBoard[row][col] = color == 'w' ? 'N' : 'n';

            } else { // this is a pawn
                int col = getCol(pieces[i].charAt(0));
                int row = getRow(pieces[i].charAt(1));
                chessBoard[row][col] = color == 'w' ? 'P' : 'p';
            }
        }
    }

    public static void main(String[] args) throws IOException {
        var in = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        // var out = new PrintWriter(new BufferedOutputStream(System.out));
        StringBuilder result = new StringBuilder();
        String[] whiteLineParts = in.readLine().split(" ");
        String[] blackLineParts = in.readLine().split(" ");
        char[][] chessBoard = new char[8][8];
        if (whiteLineParts.length == 2) {
            String[] whitePieces = whiteLineParts[1].split(",");
            fillChessboard(chessBoard, whitePieces, 'w');
        }
        if (blackLineParts.length == 2) {
            String[] blackPieces = blackLineParts[1].split(",");
            fillChessboard(chessBoard, blackPieces, 'b');
        }

        String line = "+---+---+---+---+---+---+---+---+\n";
        result.append(line);
        boolean white = true;
        for (int i = 0; i < chessBoard.length; i++) {
            result.append("|");
            for (int j = 0; j < chessBoard[i].length; j++) {
                if (chessBoard[i][j] == '\0') {
                    if (white) {
                        result.append("...");
                    } else {
                        result.append(":::");
                    }
                } else {
                    if (white) {
                        result.append("." + chessBoard[i][j] + ".");
                    } else {
                        result.append(":" + chessBoard[i][j] + ":");
                    }
                }
                result.append("|");
                white = (white == true) ? false : true;
            }
            result.append("\n").append(line);
            white = (white == true) ? false : true;
        }
        out.write(result.toString().getBytes());
        out.flush();
    }
}
