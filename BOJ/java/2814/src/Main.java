import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final long MAX = 1000000000;
        int N, P;
        N = scanner.nextInt();
        P = scanner.nextInt();
        long answer = P;
        int count = 1;
        int[] prime_table = new int[P];
        int prime_table_count = 0;
        for (int i = 2; i < P; i++) {
            if(is_prime_number(i))
                prime_table[prime_table_count++] = i;
        }

        while (count < N) {
            answer=answer+P*(N-count);
            if(answer>MAX){
                answer=0;
                break;
            }else{
                count=(int) answer/P;
                for(int i=0;i<prime_table_count;i++){
                    count-=answer/(P*prime_table[i]);
                }
            }
        }
        System.out.println(answer);
    }

    private static boolean is_prime_number(int num){
        for(int i=2;i<num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
}
