package br.com.igorramos.aula06;
public class Lutador {
    //Atributos
    private String nome, nacionalidade, categoria;
    private float peso, altura;
    private int idade, vitorias, derrotas;

    //Metodos publicos
    public void apresentar(){
        System.out.println("LUTADOR: " + this.getNome());
        System.out.println("ORIGEM: " + this.getNacionalidade());
        System.out.println("PESANDO: " + this.getPeso());
        System.out.println("MEDINDO: " + this.getAltura());
        System.out.println(this.getIdade() + "ANOS DE IDADE");
        System.out.println("GANHOU: " + this.getVitorias() + "LUTA(S)");
        System.out.println("PERDEU: " + this.getDerrotas() + "LUTA(S)");
        System.out.println("------------------------------------------");
    }

    public void status(){
        System.out.println("NOME: " + this.getNome());
        System.out.println("NACIONALIDADE: " + this.getNacionalidade());
        System.out.println("CATEGORIA: " + this.getCategoria());
        System.out.println("VITORIAS: " + this.getVitorias());
        System.out.println("DERROTAS: " + this.getDerrotas());
        System.out.println("------------------------------------------");
    }

    public void ganharLuta(){
        setVitorias(getVitorias() + 1);
    }

    public void perderLuta(){
        setDerrotas(getDerrotas() + 1);
    }


    //Metodos especiais

    //Contrutor com parametros criado para praticidade na criação dos atletas!
    public Lutador(String nome, String nacionalidade, float peso, float altura, int idade, int vitorias, int derrotas) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
        this.setPeso(peso);
        this.altura = altura;
        this.idade = idade;
        this.vitorias = vitorias;
        this.derrotas = derrotas;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public String getCategoria() {
        return categoria;
    }

    //Criação de condições dentro do setter para praticidade na definição de categoria dos atletas!
    private void setCategoria() {
        if(this.peso < 52.2){
            this.categoria = "INVALIDO";
        }else if(this.peso <= 70.3){
            this.categoria = "LEVE";
        }else if(this.peso <= 83.9){
            this.categoria = "MEDIO";
        }else if(this.peso <= 120.2){
            this.categoria = "PESADO";
        }else{
            this.categoria = "INVALIDO";
        }
    }

    public float getPeso() {
        return peso;
    }

    //Metodo chamado dentro do setPeso para definição de categoria!
    public void setPeso(float peso) {
        this.peso = peso;
        setCategoria();
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }
    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }



}
