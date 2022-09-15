package br.com.igorramos;
public class Peixe extends Animal {
    private String corEscama;

    public void soltarBolha(){
        System.out.println("FAZENDO BOLHAS...");
    }

    @Override
    public void locomover() {
        System.out.println("NADANDO...");
    }

    @Override
    public void alimentar() {
        System.out.println("COMENDO SUBSTANCIAS...");
    }

    @Override
    public void emitirSom() {
        System.out.println("FAZENDO SOM DE PEIXE...");
    }

    public String getCorEscama() {
        return corEscama;
    }

    public void setCorEscama(String corEscama) {
        this.corEscama = corEscama;
    }
}
