import java.util.*;

public class ullendullendoff {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        var line = sc.nextLine();
        String[] friends = line.split(" ");
        System.out.println(friends[12 % friends.length]);
    }
}
