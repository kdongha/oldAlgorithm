import java.util.Scanner;

public class level12_06 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int N=scanner.nextInt();
        if(N%4==0 && (N%400==0 || N%100!=0)){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
