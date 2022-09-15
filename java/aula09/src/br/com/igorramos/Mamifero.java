package br.com.igorramos;
public class Mamifero extends Animal{
    private String corPelo;

    @Override
    public void locomover() {
        System.out.println("CORRENDO...");
    }

    @Override
    public void alimentar() {
        System.out.println("MAMANDO...");
    }

    @Override
    public void emitirSom() {
        System.out.println("LATINDO...");
    }

    public String getCorPelo() {
        return corPelo;
    }

    public void setCorPelo(String corPelo) {
        this.corPelo = corPelo;
    }
}
