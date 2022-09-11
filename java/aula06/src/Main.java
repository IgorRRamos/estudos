import br.com.igorramos.aula06.Luta;
import br.com.igorramos.aula06.Lutador;

public class Main {
    public static void main(String[] args) {
        //Criação de um vetor para armazenar os lutadores, a criação do vetor se da a praticidade no armazenamento!
        Lutador atleta[] = new Lutador[6];

        //Declarando meus atletas!
        atleta[0] = new Lutador("Anderon Silva", "Brasileiro", 65.5f, 1.80f, 35, 32, 4);
        atleta[1] = new Lutador("Felipe Soares", "Brasileiro", 67.0f, 1.67f, 22, 1, 0 );
        atleta[2] = new Lutador("Igor Ramos", "Brasileiro", 75.5f, 1.85f, 25, 5, 3);
        atleta[3] = new Lutador("Yasmin Laila", "Brasileira", 77.2f, 1.69f, 23, 8, 2);
        atleta[4] = new Lutador("Nubia Maria", "Brasileira", 92.2f, 1.70f, 55, 50, 0);
        atleta[5] = new Lutador("Gabriel Ramos", "Brasileiro", 95.5f, 1.83f, 26, 5, 5);

        Luta combate = new Luta();

        combate.marcarluta(atleta[0], atleta[1]);
        combate.lutar();

        atleta[0].status();
        atleta[1].status();

    }
}
