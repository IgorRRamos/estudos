package br.com.igorramos;

public class Gafanhoto extends Pessoa{
    private String login;
    private int totalAssistido;

    public Gafanhoto(String nome, String sexo, int idade, String login) {
        super(nome, sexo, idade);
        this.login = login;
        this.totalAssistido = 0;
    }


    public void viuMaisUm(){
        this.totalAssistido++;
    }

    @Override
    protected void ganharExp() {

    }

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public int getTotalAssistido() {
        return totalAssistido;
    }

    public void setTotalAssistido(int totalAssistido) {
        this.totalAssistido = totalAssistido;
    }

    @Override
    public String toString() {
        return "Gafanhoto{" + super.toString() +
                "login='" + login + '\'' +
                ", totalAssistido=" + totalAssistido +
                '}';
    }
}
