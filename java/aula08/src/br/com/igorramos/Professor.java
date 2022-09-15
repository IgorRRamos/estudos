package br.com.igorramos;
public class Professor extends Pessoa{
    //Atributos
    private String especialidade;
    private float salario;

    //Metodos
    public void receberAum(float num){
        this.salario += num;
    }

    public String detalhesProfessor() {
        return "Professor{" +
                "especialidade='" + especialidade + '\'' +
                ", salario=" + salario +
                '}';
    }

    //Metodos especiais
    public String getEspecialidade() {
        return especialidade;
    }

    public void setEspecialidade(String especialidade) {
        this.especialidade = especialidade;
    }

    public float getSalario() {
        return salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }
}
