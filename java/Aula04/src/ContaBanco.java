public class ContaBanco {
    public static void main(String[] args) {
    Contas c1 = new Contas();

    c1.setNumConta(1);
    c1.setDono("IGOR");
    c1.abrirConta("CC");
    c1.sacar(50);
    c1.estadoAtual();


    Contas c2 = new Contas();
    c2.setNumConta(2);
    c2.setDono("FELIPE");
    c2.abrirConta("CP");
    c2.depositar(1000.0f);
    c2.estadoAtual();


    }
}
