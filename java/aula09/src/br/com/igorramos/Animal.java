package br.com.igorramos;
public abstract class Animal {
    protected float peso;
    protected int idade, mebros;

    public abstract void locomover();
    public abstract void alimentar();
    public abstract void emitirSom();

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getMebros() {
        return mebros;
    }

    public void setMebros(int mebros) {
        this.mebros = mebros;
    }
}
