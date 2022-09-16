import br.com.igorramos.Cachorro;

public class Main {
    public static void main(String[] args) {
        Cachorro dog = new Cachorro();

        dog.reagir("toma comida");
        dog.reagir("vai apanhar");

        dog.reagir(false);
        dog.reagir(true);

        dog.reagir(11, 30);
        dog.reagir(21, 00);

        dog.reagir(4, 11f);
        dog.reagir(6, 9f);
    }
}