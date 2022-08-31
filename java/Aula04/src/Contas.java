public class Contas {
    //Atributos
    public int numConta;
    protected String tipoConta;
    private String dono;
    private float saldo;
    private boolean status;

    public Contas() {
        this.setSaldo(0);
        this.setStatus(false);
    }

    //Metodos personalizados

    public void abrirConta(String t) {
        this.setTipoConta(t);
        this.setStatus(true);
        if (t == "CC") {
            this.setSaldo(50);
        } else if (t == "CP") {
            this.setSaldo(150);
        }
    }

    public void fecharConta(String f) {
        if (this.saldo > 0) {
            System.out.println("ERRO: Conta com dinheiro!");

        } else if (this.saldo < 0) {
            System.out.println("ERRO: Conta em debito!");
        } else {
            this.setStatus(false);
        }
    }

    public void depositar(float v) {
        if (this.status == false) {
            System.out.println("IMPOSSIVEL DEPOSITAR");
        } else {
            this.setSaldo(this.getSaldo() + v);
            System.out.println("DEPOSITO REALIZADO COM SUCESSO!");
        }
    }

    public void sacar(float v) {
        if (this.status == true) {
            if (this.saldo >= v) {
                this.setSaldo(this.getSaldo() - v);
            } else {
                System.out.println("SALDO INSUFICIENTE!");
            }
        } else {
            System.out.println("IMPOSSIVEL SACAR!");
        }

    }
    public void mensalidade(){
        float v = 0;
        if(this.tipoConta == "cc"){
            v = 12;
        }else if (this.tipoConta == "cp"){
            v = 20;
        }
        if(this.status == true){
            if(this.saldo > v){
                this.setSaldo(this.getSaldo() - v);
            }else{
                System.out.println("SALDO INSUFICIENTE!");
            }
        }else{
            System.out.println("IMPOSSIVEL PAGAR!");
        }
    }

    //Metodos personalizados

    public void setNumConta(int n) {
        this.numConta = n;
    }

    public int getNumConta() {
        return this.numConta;
    }

    public void setTipoConta(String t) {
        this.tipoConta = t;
    }

    public String getTipoConta() {
        return this.tipoConta;
    }

    public void setDono(String d) {
        this.dono = d;
    }

    public String getDono() {
        return this.dono;
    }

    public void setSaldo(float s) {
        this.saldo = s;
    }

    public float getSaldo() {
        return this.saldo;
    }

    public void setStatus(boolean st) {
        this.status = st;
    }

    public boolean getStatus() {
        return this.status;
    }

    public void estadoAtual(){
        System.out.println("-----------------------------------");
        System.out.println("NUMERO DA CONTA: " + this.numConta);
        System.out.println("TIPO DA CONTA: " + this.tipoConta);
        System.out.println("NOME DO CLIENTE: " + this.dono);
        System.out.println("SALDO DA CONTA : " +  this.saldo);
        System.out.println("CONTA ATIVA: " + this.status);
        System.out.println("");
    }




}