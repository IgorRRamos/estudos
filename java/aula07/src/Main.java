import br.com.igorramos.aula07.Humano;
import br.com.igorramos.aula07.Livro;

public class Main {
    public static void main(String[] args) {
        Humano pessoa = new Humano("IGOR", "MASCULINO", 25);
        Livro book = new Livro("STEPHINIE MEYER", "CREPUSCULO", 390, pessoa);

        pessoa.set(book);

        pessoa.abrirLivro();
        pessoa.folhearPag(50);
        pessoa.proxPagina();
        pessoa.proxPagina();
        pessoa.proxPagina();
        pessoa.pagAnterior();
        pessoa.fazerAniversario();
        pessoa.infoBook();
        pessoa.fecharLivro();

    }
}