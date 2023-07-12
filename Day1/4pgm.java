//program to find if sum of two numbers is even or odd
import java.util.Scanner;
public class evorod {
    public static void main(String[] args) {
        int n1, n2, sum;
        Scanner sc = new Scanner(System.in);
        n1 = sc.nextInt();
        n2 = sc.nextInt();
        sum = n1+n2;
        if (sum%2==0){
            System.out.println("Sum is EVEN");
        }
        else {
            System.out.println("Sum is ODD");
        }
        
        
    }
}
