package br.com.igorramos.interacaoPOO;
public class Humano {
    //Atributos
    private Caneta pen;
    private String nome;
    private int idade;
    private float peso;

    //Metodos

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }

    public void desenhar() {
        if(this.pen != null){
            this.pen.rabiscar();
        }else{
            System.out.println("VOCE NAO TEM UMA CANETA!");
        }
    }

    public void destamparPen(){
        if(this.pen.getTampada()){
            this.pen.setTampada(false);
        }
    }

    public void set(Caneta pen) {
        this.pen = pen;
    }
}
