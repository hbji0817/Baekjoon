import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String S = sc.nextLine();
        
        int[] A = new int[26];
        
        for (int j = 0; j < 26; j++) {
            A[j] = -1;
        }
        
        for (int i = 0; i < S.length(); i++) {
            char ch = S.charAt(i);     
            int num = ch - 'a';           

            if (A[num] == -1) {
                A[num] = i;
            }
        }

        for (int i = 0; i < 26; i++) {
            System.out.print(A[i] + " ");
        }

        sc.close();
    }
}