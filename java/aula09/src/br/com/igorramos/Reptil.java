package br.com.igorramos;
public class Reptil extends Animal{
    private String corEscama;

    @Override
    public void locomover() {
        System.out.println("RASTEJANDO...");
    }

    @Override
    public void alimentar() {
        System.out.println("COMENDO VEJETAIS...");
    }

    @Override
    public void emitirSom() {
        System.out.println("SOM DE REPTIL");
    }

    public String getCorEscama() {
        return corEscama;
    }

    public void setCorEscama(String corEscama) {
        this.corEscama = corEscama;
    }
}
