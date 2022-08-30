import java.util.Scanner;

public class pernas {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        int choice;

        System.out.print("DIGITE QUANTAS PERNAS: ");
        choice = sc.nextInt();
        switch(choice){
            case 1:
                System.out.println("SACI");
                break;
            case 2:
                System.out.println("BIPEDE");
                break;
            case 4:
                System.out.println("QUADRUPEDE");
                break;
            case 6:
                System.out.println("ARANHA");
                break;
            case 8:
                System.out.println("ARANHA");
                break;
            default:
                System.out.println("ET");
                break;
        }
    }
}
