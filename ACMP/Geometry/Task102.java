import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x1, y1, x2, y2, x3, y3, x, y;
        x1 = scan.nextInt();
        y1 = scan.nextInt();
        x2 = scan.nextInt();
        y2 = scan.nextInt();
        x3 = scan.nextInt();
        y3 = scan.nextInt();
        x = scan.nextInt();
        y = scan.nextInt();
        double a = rast(x1, y1, x, y);
        double b = rast(x2, y2, x, y);
        double c = rast(x3, y3, x, y);
        double A = rast(x1,y1,x2,y2);
        double B = rast(x2,y2,x3,y3);
        double C = rast(x1,y1,x3,y3);
        double s1 = pl(a,b,A);
        double s2 = pl(a,c,C);
        double s3 = pl(c,b,B);
        double s = pl(A,B,C);
        if(Math.abs(s1+s2+s3-s)<=0.00001){
            System.out.println(In);
        }
        else{
            System.out.println(Out);
        }

    }

    static double rast(int x1, int y1, int x2, int y2) {
        double ans = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        return ans;
    }

    static double pl(double a, double b, double c) {
        double p = (a + b + c) / 2;
        return Math.sqrt(p * (p - a) * (p - b) * (p - c));
    }
}

