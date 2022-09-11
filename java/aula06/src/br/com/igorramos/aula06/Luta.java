package br.com.igorramos.aula06;
import java.util.Random;

public class Luta {
    //Atributus

    //Utilizei um tipo abstrato, ou seja uma instancia de uma classe ja criada, para o desafiante e o desafiado!
    private Lutador desafiante;
    private Lutador desafiado;
    private int rounds;
    private boolean aprovada;

    //Metodos

    /*
    REGRAS DA LUTA:

    1 - So pode ser marcada por lutadores da mesma categoria!

    2 - Desafiado e desafiante devem ser lutadores diferentes!

    3 - So pode acontecer se estiver aprovada!

    4 - So pode haver vitoria de um dos lutadores!

    */
    public void marcarluta(Lutador l1, Lutador l2){
        if(l1.getCategoria().equals(l2.getCategoria()) && l1 != l2){
            this.setAprovada(true);
            this.setDesafiante(l1);
            this.setDesafiado(l2);
        }else{
            this.setAprovada(false);
            this.setDesafiante(null);
            this.setDesafiado(null);
        }

    }

    public void lutar(){
        if(this.aprovada == true){
            System.out.println("### DESAFIADO ###");
            this.desafiado.apresentar();
            System.out.println("### DESAFIANTE ###");
            this.desafiante.apresentar();

            Random aleatorio = new Random();

            System.out.println("===========RESULTADO DA LUTA=============");

            int vencedor = aleatorio.nextInt(3);
            switch (vencedor) {
                case 1: // Vitoria desafiado
                    System.out.println("VITORIA DO " + this.desafiado.getNome());
                    this.desafiado.ganharLuta();
                    this.desafiante.perderLuta();
                break;
                case 2: // Derrota desafiante
                    System.out.println("VITORIA DO " + this.desafiado.getNome());
                    this.desafiante.ganharLuta();
                    this.desafiado.perderLuta();
                    break;
            }
            System.out.println("================================================");
        }else{
            System.out.println("A luta nao pode acontecer!");
        }
    }

    //Metodos especiais

    public Lutador getDesafiante() {
        return desafiante;
    }

    public void setDesafiante(Lutador disafiante) {
        this.desafiante = disafiante;
    }

    public Lutador getDesafiado() {
        return desafiado;
    }

    public void setDesafiado(Lutador disafiado) {
        this.desafiado = disafiado;
    }

    public int getRounds() {
        return rounds;
    }

    public void setRounds(int rounds) {
        this.rounds = rounds;
    }

    public boolean isAprovada() {
        return aprovada;
    }

    public void setAprovada(boolean aprovada) {
        this.aprovada = aprovada;
    }
}

