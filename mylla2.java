import java.util.*;

public class mylla2 {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        char[][] board = new char[3][3];
        for (int i = 0; i < board.length; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < board[i].length; j++) {
                board[i][j] = line.charAt(j);
            }
        }
        String result = "Neibb";
        if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
            result = "Jebb";
        } else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
            result = "Jebb";
        } else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
            result = "Jebb";
        } else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
            result = "Jebb";
        } else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
            result = "Jebb";
        } else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
            result = "Jebb";
        } else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
            result = "Jebb";
        } else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
            result = "Jebb";
        }
        System.out.println(result);
    }
}
