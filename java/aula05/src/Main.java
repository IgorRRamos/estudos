import br.com.igorramos.controleremoto.ControleRemoto;

public class Main {
    public static void main(String[] args) {
        ControleRemoto control = new ControleRemoto();

        control.ligar();
        control.maisVolume();
        control.play();
        control.abrirMenu();
        control.fecharMenu();

    }
}
