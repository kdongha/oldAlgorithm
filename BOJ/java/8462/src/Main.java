import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n,t;
        Scanner scanner=new Scanner(System.in);
        HashMap<Integer,Integer> map = null;
        n=scanner.nextInt();
        t=scanner.nextInt();
        int[] table=new int[n];
        for(int i=0;i<n;i++){
            table[i]=scanner.nextInt();
        }
        for(int i=0;i<t;i++){
            int x,y,answer=0;
            x=scanner.nextInt()-1;
            y=scanner.nextInt();
            map= new HashMap<>();
            for(int j=x;j<y;j++){
                if(map.containsKey(table[j])){
                    map.replace(table[j],map.get(table[j])+1);
                }else{
                    map.put(table[j],1);
                }
            }
            for(int j:map.keySet()){
                answer+=j*map.get(j)*map.get(j);
            }
            System.out.println(answer);
        }
    }
}
