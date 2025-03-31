import java.util.*;

public class eligibility {

    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i++) {
            String result;
            String[] lineParts = sc.nextLine().split(" ");
            String[] postSecStudiesDate = lineParts[1].split("/");
            String[] birthDate = lineParts[2].split("/");
            int courses = Integer.parseInt(lineParts[3]);
            int postSecStudiesYear = Integer.parseInt(postSecStudiesDate[0]);
            int birthYear = Integer.parseInt(birthDate[0]);

            if (postSecStudiesYear >= 2010) {
                result = "eligible";
            } else if (birthYear >= 1991) {
                result = "eligible";
            } else if (courses >= 41) {
                result = "ineligible";
            } else {
                result = "coach petitions";
            }
            System.out.println(lineParts[0] + " " + result);
        }
    }
}
