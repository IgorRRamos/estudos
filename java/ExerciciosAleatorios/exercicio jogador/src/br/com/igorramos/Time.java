package br.com.igorramos;
import java.util.ArrayList;
import java.util.Scanner;
public class Time {

    public ArrayList<Jogador> jogadores;
    public int totPlayers, totSuspendedPayers;

    public int getTotPlayers() {
        return totPlayers;
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
