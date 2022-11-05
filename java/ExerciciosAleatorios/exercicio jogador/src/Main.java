import java.util.Scanner;
import java.util.ArrayList;

import br.com.igorramos.Jogador;
import br.com.igorramos.ListaDeJogadores;

public class Main {
    public static void main(String[] args) {
        ArrayList<Jogador> jogador = new ArrayList<>();
        ListaDeJogadores listTeam = new ListaDeJogadores(jogador);
        Scanner teclado = new Scanner(System.in);

        int choice;

        do {
            System.out.println("1 - Cadastrar jogador");
            System.out.println("2 - Tirar jogador do time");
            System.out.println();
            System.out.print("Selecione uma opção: ");
            choice = teclado.nextInt();

            switch (choice) {

                case 1:
                    listTeam.registrar();
                    break;
                case 2:
                    listTeam.removePlayer();
                    break;
                default:
                    if (choice != 0) System.out.println("Opção invalida!");
                    break;

            }

        } while (choice != 0);


    }
}