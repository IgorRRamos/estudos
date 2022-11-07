package br.com.igorramos;

import br.com.igorramos.Jogador;

import java.util.ArrayList;
import java.util.Scanner;

public class ListaDeJogadores {
    Scanner teclado = new Scanner(System.in);
    public ArrayList<Jogador> jogador;


    public ListaDeJogadores(ArrayList<Jogador> jogador) {
        this.jogador = jogador;
    }


    public void registrar() {
        System.out.print("Nome do jogador: ");
        String nome = teclado.nextLine();
        System.out.print("Idade do jogador: ");
        int idade = teclado.nextInt();
        System.out.print("Altura do jogador: ");
        double altura = teclado.nextDouble();

        Jogador newPlayer = new Jogador(nome, idade, altura);

        jogador.add(newPlayer);
    }

    public void removePlayer() {
        String nome;
        System.out.print("Digite o nome do jogador: ");
        nome = teclado.nextLine();

        for (int i = 0; i <= jogador.size(); i++) {
            if (nome.equals(jogador.get(i))) {
                jogador.remove(jogador.get(i));
            } else {
                System.out.println("Jogador não Encontrado!!");
            }
        }
    }

    public ArrayList<Jogador> getJogador() {
        return jogador;
    }

    public void setJogador(ArrayList<Jogador> jogador) {
        this.jogador = jogador;
    }
}
