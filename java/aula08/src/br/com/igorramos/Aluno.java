package br.com.igorramos;
public class Aluno extends Pessoa{
    //Atributos
    private boolean matricula;
    private String curso;

    //Metodos
    public void cancelarMat(){
        this.matricula = false;
    }

    public String detalhesAluno() {
        return "Aluno{" +
                "matricula=" + matricula +
                ", curso='" + curso + '\'' +
                '}';
    }

    //Metodos especiais
    public boolean isMatricula() {
        return matricula;
    }

    public void setMatricula(boolean matricula) {
        this.matricula = matricula;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }
}
