#program to find greatest of two numbers
import java.util.Scanner;
public class gof2 {
    public static void main(String[] args) {
        int n1,n2;
        Scanner sc = new Scanner(System.in);
        n1 = sc.nextInt();
        n2 = sc.nextInt();
        if (n1>n2){
            System.out.println("Number 1 is greater");
        }
        else {
            System.out.println("Number 2 is greater");
        }
        
        
    }
}
