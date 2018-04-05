import java.util.Scanner;

public class level12_04 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int max=0,temp;
        for(int i=0;i<3;i++){
            max=max>(temp=scanner.nextInt())?max:temp;
        }
        System.out.println(max);
    }
}
