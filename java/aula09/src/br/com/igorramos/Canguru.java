package br.com.igorramos;
public class Canguru extends Animal{
    public void usarBolsa(){
        System.out.println("GUARDANDO FILHOTE...");
    }

    @Override
    public void locomover() {
        System.out.println("SALTANDO...");
    }

    @Override
    public void alimentar() {
        System.out.println("COMENDO FOLHA...");
    }

    @Override
    public void emitirSom() {
        System.out.println("FAZENDO SOM DE CANGURU...");
    }
}
