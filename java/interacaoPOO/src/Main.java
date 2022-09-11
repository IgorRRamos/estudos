import br.com.igorramos.interacaoPOO.Caneta;
import br.com.igorramos.interacaoPOO.Humano;

public class Main {
    public static void main(String[] args) {
        Humano pessoa = new Humano();
        Caneta pen = new Caneta();

        pessoa.setNome("IGOR");
        pessoa.setIdade(25);
        pessoa.setPeso(75.5f);

        pen.setMarca("BIC crystal");
        pen.setCor("Azul");
        pen.setPonta(0.5f);

        pessoa.set(pen);
        pen.status();
        pessoa.destamparPen();
        pessoa.desenhar();

    }
}
