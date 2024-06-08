import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int X = scanner.nextInt();  
        int Y = scanner.nextInt();  

        
        int totalMinutes = X * 60 + Y + 150;  

        
        int newHours = (totalMinutes / 60) % 24;  
        int newMinutes = totalMinutes % 60;
        
        System.out.printf("%02d:%02d\n", newHours, newMinutes);

        scanner.close();
    }
}
