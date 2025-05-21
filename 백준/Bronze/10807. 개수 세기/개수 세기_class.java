import java.util.Scanner;

class Num {
    int number;

    Num(int number) { 
        this.value = number;
    }

    boolean Equal(int t) {
        return this.number == t;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        Num[] numbers = new Num[n];

        for (int i = 0; i < n; i++) {
            int input = scanner.nextInt();
            numbers[i] = new Num(input); 
        }

        int t = scanner.nextInt(); 
        int count = 0;

        for (int i = 0; i < numbers.length; i++) 
        {
            if (numbers[i].Equal(t)) {
                count++;
            }
        }
        
        System.out.println(count);
        scanner.close();
    }
}
