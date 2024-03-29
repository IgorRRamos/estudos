package br.com.igorramos.pen;
public class Pen {
    //Atributos
    public String marca;
    public String cor;
    public float ponta;
    private int carga;
    public boolean tampada;

    //Metodos
    public Pen(){
        setMarca("CIS");
        setCor("AZUL");
        setPonta(0.5f);
        setCarga(100);
        setTampada(true);
    }

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

    public int getCarga() {
        return carga;
    }

    public void setCarga(int carga) {
        this.carga = carga;
    }

    public boolean getTampada() {
        return tampada;
    }

    public void setTampada(boolean tampada) {
        this.tampada = tampada;
    }

    public void rabiscar(){
        if(!this.getTampada()){
            System.out.println("RABISCANDO");
            setCarga(getCarga() - 1);
        }else{
            System.out.println("CANETA TAMPADA");
        }
    }

    public void destampar(){
        if(getTampada()) {
            this.setTampada(!this.getTampada());
        }
    }
    public void tampar(){
        if(!getTampada()) {
            this.setTampada(true);
        }
    }

    public void status(){
        System.out.println("MARCA: " + this.getMarca());
        System.out.println("COR: " + this.getCor());
        System.out.println("PONTA: " + this.getPonta());
        System.out.println("CARGA: " + this.getCarga());
        System.out.println("TAMPADA: " + this.getTampada());
    }





}
