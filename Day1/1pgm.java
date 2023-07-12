//Program to find if a number is positive, negative or zero
import java.util.Scanner;
public class posnegzero {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        if (n>0){
            System.out.println("The number is positive");
        }
        else if (n<0){
            System.out.println("The number is negative");
        }
        else {
            System.out.println("The number is zero");
        }
    }
}
