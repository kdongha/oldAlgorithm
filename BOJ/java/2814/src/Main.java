import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final long MAX = 1000000000;
        int N, P;
        long answer = 0;
        N = scanner.nextInt();
        P = scanner.nextInt();
        long[] table;
        if (N > 2) {
            table = new long[N];
        } else {
            table = new long[2];
        }
        table[0] = P;
        table[1] = P*P;
        int table_count = 2;

        while (table_count < N) {
            P++;
            if (is_devide_number(P, table[0])) {
                table[table_count] = P*table[0];
                if(table[table_count-1]==0||table[table_count]>MAX){
                    table[table_count]=0;
                }
                table_count++;
            }
        }

        answer = table[N - 1];
        System.out.println(answer);
    }

    private static boolean is_devide_number(int num1, long num2) {
        for (int i = 2; i < num2; i++) {
            if (num1 % i == 0) {
                return false;
            }
        }
        return true;
    }
}
