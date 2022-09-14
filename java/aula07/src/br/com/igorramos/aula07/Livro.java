package br.com.igorramos.aula07;
public class Livro implements Controlador {
    //Atributos
    private Humano leitor;
    private String autor, livro;
    private int totPaginas, pagAtual;
    private boolean aberto;

    //Metodos especiais


    public Livro(String autor, String livro, int totPaginas, Humano leitor) {
        this.autor = autor;
        this.livro = livro;
        this.totPaginas = totPaginas;
        this.leitor = leitor;

    }

    public String detalhes() {
        return "Livro{" +
                "aberto=" + aberto +
                ", autor='" + autor + '\'' +
                ", livro='" + livro + '\'' +
                ", totPaginas=" + totPaginas +
                ", pagAtual=" + pagAtual +
                ", leitor=" + leitor.getNome() +
                '}';
    }

    @Override
    public void abrir() {
        this.aberto = true;
    }

    @Override
    public void fechar() {
        this.aberto = false;
    }

    @Override
    public void folhear(int p) {
        if(p > totPaginas) {
            this.pagAtual = 0;
        }else{
            this.pagAtual = p;
        }
    }

    @Override
    public void proximaPagina() {
        this.pagAtual++;
    }

    @Override
    public void voltarPagina() {
        this.pagAtual--;
    }

    //Metodos
    public Humano getPessoa() {
        return leitor;
    }

    public void setPessoa(Humano leitor) {
        this.leitor = leitor;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getLivro() {
        return livro;
    }

    public void setLivro(String livro) {
        this.livro = livro;
    }

    public int getTotPaginas() {
        return totPaginas;
    }

    public void setTotPaginas(int totPaginas) {
        this.totPaginas = totPaginas;
    }

    public int getPagAtual() {
        return pagAtual;
    }

    public void setPagAtual(int pagAtual) {
        this.pagAtual = pagAtual;
    }

    public boolean isAberto() {
        return aberto;
    }

    public void setAberto(boolean aberto) {
        this.aberto = aberto;
    }

}
