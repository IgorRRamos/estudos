import java.util.Scanner;

public class votos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int idade;

        System.out.print("DIGITE SUA IDADE: ");
        idade = sc.nextInt();

        if(idade < 16){
            System.out.println("NÃO VOTA!");
        }else if(idade >= 16 && idade < 18 || idade > 70){
            System.out.println("VOTO OPCIONAL!");
        }else{
            System.out.println("VOTO OBRIGATORIO!");
        }
    }
}
