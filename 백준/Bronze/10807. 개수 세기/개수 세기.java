import java.util.Scanner;

public class Main {
    public static void main(String[] args) { 
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int num;
        int count = 0;
        int[] number = new int[n];
        
        for(int i = 0; i < n; i++)
        {
            number[i] = scanner.nextInt();
        }
        
        num = scanner.nextInt();
        
        for(int i = 0; i < n; i++)
        {
            if(number[i] == num)
            {
                count++;
            }
        }
        System.out.println(count);

        scanner.close();
        
    }
}