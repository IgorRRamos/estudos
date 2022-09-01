package br.com.igorramos.sistemadeclientes;
public class Clientes {
    public String name;
    public int code;
    protected float limite;

    public boolean isSituation() {
        return situation;
    }

    public void setSituation(boolean situation) {
        this.situation = situation;
    }

    public boolean situation;

    public Clientes(){
        this.setLimite(0);
        this.setSituation(false);
    }

    public void status(){
        System.out.println(" ");
        System.out.println("NOME: " + this.name);
        System.out.println("CODIGO: " + this.code);
        System.out.println("LIMITE: " + this.limite);
        System.out.println("SITUACAO: " + this.situation);
        System.out.println(" ");
    }

    public void attSituation(boolean a){
        if(a == true) {
            this.setSituation(true);
        }else if(a == false){
            this.setSituation(false);
        }
    }

   public void aumentarLimite(float l){
        if(this.situation == false){
            System.out.println("NAO E ESPECIAL, LIMITE ZERADO");
            this.setLimite(0);
        }else if(this.situation == true){
            this.setLimite(this.getLimite() + l);
        }
   }


    public float getLimite() {
        return limite;
    }

    public void setLimite(float limite) {
        this.limite = limite;
    }
}
