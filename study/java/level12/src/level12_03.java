import java.util.Scanner;

public class level12_03 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        for(int i=0;i<3;i++) {
            int count = 0;
            String str;
            for(int j=0;j<4;j++){
               if(scanner.nextInt()==0){
                   count++;
               }
            }
            if(count==1){
                str="A";
            }else if(count==2){
                str="B";
            }else if(count==3){
                str="C";
            }else if(count==4){
                str="D";
            }else{
                str="E";
            }
            System.out.println(str);
        }
    }
}
