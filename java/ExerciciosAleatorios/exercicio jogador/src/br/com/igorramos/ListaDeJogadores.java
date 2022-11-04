package br.com.igorramos;
import br.com.igorramos.Jogador;

import java.util.ArrayList;
import java.util.Scanner;

public class ListaDeJogadores {
    Scanner teclado = new Scanner(System.in);
    public ArrayList<Jogador> jogador;


    public void registrar(){
        System.out.print("Nome do jogador: ");
        String nome = teclado.nextLine();
        System.out.print("Idade do jogador: ");
        int idade = teclado.nextInt();
        System.out.print("Altura do jogador: ");
        double altura = teclado.nextFloat();

        Jogador newPlayer = new Jogador(nome, idade, altura);

        jogador.add(newPlayer);
    }

    public void removePlayer(){
        jogador.remove(0);
    }



    public ArrayList<Jogador> getJogador() {
        return jogador;
    }

    public void setJogador(ArrayList<Jogador> jogador) {
        this.jogador = jogador;
    }
}
