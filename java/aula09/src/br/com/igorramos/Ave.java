package br.com.igorramos;
public class Ave extends Animal{
    private String corPena;

    public void fazerNinho(){
        System.out.println("FAZENDO NINHO...");
    }

    public String getCorPena() {
        return corPena;
    }

    public void setCorPena(String corPena) {
        this.corPena = corPena;
    }

    @Override
    public void locomover() {
        System.out.println("VOANDO...");
    }

    @Override
    public void alimentar() {
        System.out.println("COMENTO SEMENTES...");
    }

    @Override
    public void emitirSom() {
        System.out.println("PIANDO...");
    }
}
