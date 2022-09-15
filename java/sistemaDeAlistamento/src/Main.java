import br.com.igorramos.DadosRecruta;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        DadosRecruta coleta = new DadosRecruta();

        int selecOption;

        do{
            System.out.println("=========ALISTAMENTO========");
            System.out.println("(0) - Sair");
            System.out.println("(1) - Cadastrar dados");
            System.out.println("(2) - Situacao");
            System.out.println("");

            System.out.print("OPCAO: ");
            selecOption = teclado.nextInt();

            switch(selecOption){
                case 1:
                    System.out.print("NOME:  ");
                    coleta.setNome();
                    System.out.print("CPF:  ");
                    coleta.setCpf();
                    System.out.print("SEXO:  ");
                    coleta.setSexo();
                    System.out.print("IDADE:  ");
                    coleta.setIdade();
                    System.out.print("TELEFONE:  ");
                    coleta.setFone();
                    System.out.print("ESTADO CIVIL:  ");
                    coleta.setEstadoCivil();
                    break;

                case 2:
                    System.out.println(coleta.detalhes());
                    coleta.verificandoMaioridade();
                    break;

                case 3:

                    break;


                default:
                    break;
            }

        }while(selecOption != 0);
    }
}