package br.com.igorramos;
import br.com.igorramos.Jogador;

import java.util.ArrayList;
import java.util.Scanner;

public class ListaDeJogadores {
    Scanner teclado = new Scanner(System.in);
    public ArrayList<Jogador> jogador;


    public void registrar(){
        String nome = teclado.nextLine();
        int idade = teclado.nextInt();
        float altura = teclado.nextFloat();

        Jogador newPlayer = new Jogador(nome, idade, altura);

        jogador.add(newPlayer);
    }



    public ArrayList<Jogador> getJogador() {
        return jogador;
    }

    public void setJogador(ArrayList<Jogador> jogador) {
        this.jogador = jogador;
    }
}
