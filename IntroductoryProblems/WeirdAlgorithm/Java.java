package IntroductoryProblems.WeirdAlgorithm;
import java.util.Scanner;
class Java{
    public static void main(String[] args){
        // for simplicity I am using Scanner .. use BufferedReader and BufferedWriter for fast i/o
        Scanner sc=new Scanner(System.in);
        long number=sc.nextLong(); // here I am taking it in long becoz as I am multiplying with 3 ,it may exceed the limit of int
        System.out.print(number+" ");
        while(number!=1){
            if((number&1)==1) {
                // number is odd so multiply it by 3 and add 1
                number=number*3 + 1;
            }
            else{
                // number is odd
                number=number/2;
            }
            System.out.print(number+" ");
        }
    }
}