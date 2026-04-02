import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        for (int i = 0; i < tc; i++) {
            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int r1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();
            int r2 = sc.nextInt();

            long dx = x1 - x2;
            long dy = y1 - y2;
            long distSq = dx * dx + dy * dy;
            long sumR = r1 + r2;
            long diffR = Math.abs(r1 - r2);

            if (distSq == 0 && r1 == r2) {
                System.out.println("-1");
            } else if (distSq > sumR * sumR || distSq < diffR * diffR) {
                System.out.println("0");
            } else if (distSq == sumR * sumR || distSq == diffR * diffR) {
                System.out.println("1");
            } else {
                System.out.println("2");
            }
        }
    }
}