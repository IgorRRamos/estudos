package br.com.igorramos.interacaoPOO;
public class Caneta {

    //Atributos
    private String marca, cor;
    private float ponta;
    private boolean tampada;

    //Metodos especiais
    public Caneta(){
        tampada = true;
    }
    public void rabiscar(){
        if(!this.getTampada()){
            System.out.println("RABISCANDO");
        }else{
            System.out.println("IMPOSSIVEL RABISCAR, CANETA TAMPADA!");
        }
    }
    public void status(){
        System.out.println("MARCA: " + this.getMarca());
        System.out.println("COR: " + this.getCor());
        System.out.println("PONTA: " + this.getPonta());
        System.out.println("TAMPADA: " + this.getTampada());
    }

    //Metodos

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public float getPonta() {
        return ponta;
    }

    public void setPonta(float ponta) {
        this.ponta = ponta;
    }
    public boolean getTampada() {
        return tampada;
    }

    public void setTampada(boolean tampada) {
        this.tampada = tampada;
    }
}
