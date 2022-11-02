package br.com.igorramos;
import java.util.ArrayList;
import java.util.Scanner;
public class Time {

    private ArrayList<Jogador> jogadores;
    public int totPlayers, totSuspendedPayers;

    public Time(ArrayList<Jogador> jogadores){
        this.jogadores = jogadores;
    }

    public int getTotPlayers() {
        return totPlayers;
    }

    public ArrayList<Jogador> getJogadores() {
        return jogadores;
    }

    public void setJogadores(ArrayList<Jogador> jogadores) {
        this.jogadores = jogadores;
    }

    public void setTotPlayers(int totPlayers) {
        this.totPlayers = totPlayers;
    }

    public int getTotSuspendedPayers() {
        return totSuspendedPayers;
    }

    public void setTotSuspendedPayers(int totSuspendedPayers) {
        this.totSuspendedPayers = totSuspendedPayers;
    }
}
