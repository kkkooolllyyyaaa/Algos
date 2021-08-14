import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger bigInteger = scan.nextBigInteger();
        System.out.println(bigInteger.sqrt());
    }
}

