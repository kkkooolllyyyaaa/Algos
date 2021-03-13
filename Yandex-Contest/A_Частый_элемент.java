import java.io.IOException;
import java.util.HashMap;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        Integer n;
        int x;
        n=scanner.nextInt();
        HashMap<Integer,Integer> hashMap = new HashMap();
        int s=0;
        for(int i=0;i<n;i++){
            x=scanner.nextInt();
            if(hashMap.containsKey(x))
                hashMap.put(x,hashMap.get(x)+1);
            else
                hashMap.put(x,1);
        }
        int count=0,chislo=3;
        for(Integer it : hashMap.keySet()){
            if(hashMap.get(it)>count){
                count=hashMap.get(it);
                chislo=it;
            }
            else if(hashMap.get(it)==count){
                if(it>chislo){
                    chislo=it;
                }
            }
        }
        System.out.println(chislo);
    }
}

