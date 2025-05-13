import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] arr = new int[n];
        for (int k = 0; k < n; k++) {
            arr[k] = k + 1;
        }

        for (int j = 0; j < m; j++) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            int t = arr[a - 1];
            arr[a - 1] = arr[b - 1];
            arr[b - 1] = t;
        }

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}