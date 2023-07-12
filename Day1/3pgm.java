//Program to find if a number is even or odd
import java.util.Scanner;
public class evorod {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
       
        if (n%2==0){
            System.out.println("Number is EVEN");
        }
        else {
            System.out.println("Number is ODD");
        }
        
        
    }
}
