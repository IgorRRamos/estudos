import br.com.igorramos.Gafanhoto;
import br.com.igorramos.Video;
import br.com.igorramos.Visualizacao;

public class Main {
    public static void main(String[] args) {
        Video videos[] = new Video[3];

        videos[0] = new Video("Aula 12 POO");
        videos[1] = new Video("Aula 13 POO");
        videos[2] = new Video("Aula 14 POO");

        Gafanhoto student[] = new Gafanhoto[2];
        student[0] = new Gafanhoto("IGOR", "M", 25, "ROGI");
        student[1] = new Gafanhoto("YASMIN", "N", 23, "DIANY");

        Visualizacao assistindo = new Visualizacao(student[0], videos[0]);

        assistindo.toString();
        System.out.println(videos[0].toString());
    }
}