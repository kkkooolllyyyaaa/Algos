import java.util.Scanner;
public class lab1{
    public static boolean gcd(long x, long y){
        while(x*y>0){
            if(y>x) {
                x = x + y;
                y = x - y;
                x = x - y;
            }
            x=x%y;
        }
        if((x+y)>1) return false;
        else return true;
    }

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        long a;
        a=in.nextInt();
        long p=a-a/2-1, q =a-p;
        while(true){
            if(gcd(p,q)){
                System.out.println(p+ );
                System.out.print(q);
                break;
            }
            p--;
            q++;
        }
    }
}
