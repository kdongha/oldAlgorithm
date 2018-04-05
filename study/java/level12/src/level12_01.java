import java.util.Scanner;
public class level12_01 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int A,B,C;
        A=scanner.nextInt();
        B=scanner.nextInt();
        System.out.println(A-B<0?-1:A-B);
    }
}
