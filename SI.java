import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Principal Amount: ");
        float principal = sc.nextFloat();

        System.out.print("Enter Rate of Interest: ");
        float rate = sc.nextFloat();

        System.out.print("Enter Time (in years): ");
        float time = sc.nextFloat();

        float SI = (principal * rate * time) / 100;

        System.out.println("Simple Interest = " + SI);

        sc.close();
    }
}
