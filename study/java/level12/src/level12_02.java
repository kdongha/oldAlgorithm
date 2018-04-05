import java.util.Scanner;
public class level12_02 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int A;
        A=scanner.nextInt();
        if(A%2==0){
            System.out.println("even");
        }else{
            System.out.println("not even");
        }
    }
}
