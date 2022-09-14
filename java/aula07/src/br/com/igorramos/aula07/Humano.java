package br.com.igorramos.aula07;

public class Humano {
    //Atributos
    private String nome, sexo;
    private int idade;
    private Livro book;

    //Metodos especiais
    public Humano(String nome, String sexo, int idade) {
        this.nome = nome;
        this.sexo = sexo;
        this.idade = idade;
    }

    public void fazerAniversario(){
        this.idade++;
    }

    public void infoBook(){
        System.out.println(this.book.detalhes());
    }

    public void abrirLivro(){
        this.book.abrir();
    }

    public void fecharLivro(){
        this.book.fechar();
    }

    public void folhearPag(int p){
        this.book.folhear(p);
    }

    public void proxPagina(){
        this.book.proximaPagina();
    }
    public void pagAnterior(){
        this.book.voltarPagina();
    }


    //Metodos
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }


    public void set(Livro book) {
        this.book = book;
    }
}
