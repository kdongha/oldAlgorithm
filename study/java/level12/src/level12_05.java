import java.util.Scanner;

public class level12_05 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A, B,result=0;
        String str;
        A=scanner.nextInt();
        scanner.nextLine();
        str=scanner.nextLine();
        B=scanner.nextInt();
        if(str.equals("+")){
            result=A+B;
        }else if(str.equals("-")){
            result=A-B;
        }else if(str.equals("*")){
            result=A*B;
        }else if(str.equals("/")){
            result=A/B;
        }
        System.out.println(result);
    }
}
