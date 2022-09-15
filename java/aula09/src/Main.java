import br.com.igorramos.*;

public class Main {
    public static void main(String[] args) {
        Ave passaro1 = new Ave();
        passaro1.setPeso(1.5f);
        passaro1.setMebros(2);
        passaro1.setIdade(1);
        passaro1.setCorPena("PRETO");
        passaro1.fazerNinho();
        passaro1.alimentar();
        passaro1.emitirSom();
        passaro1.locomover();

        Arara passaro2 = new Arara();
        passaro2.setPeso(1);
        passaro2.setMebros(2);
        passaro2.setIdade(2);
        passaro2.setCorPena("AZUL");
        passaro2.fazerNinho();
        passaro2.alimentar();
        passaro2.emitirSom();
        passaro2.locomover();

        Mamifero mamifero = new Mamifero();
        mamifero.setPeso(12);
        mamifero.setIdade(3);
        mamifero.setMebros(4);
        mamifero.setCorPelo("BRANCO");
        mamifero.locomover();
        mamifero.alimentar();
        mamifero.emitirSom();

        Canguru canguru = new Canguru();
        canguru.setPeso(20.5f);
        canguru.setIdade(3);
        canguru.setMebros(2);
        canguru.usarBolsa();
        canguru.locomover();
        canguru.alimentar();
        canguru.emitirSom();

        Cachorro cachorro = new Cachorro();
        cachorro.setPeso(40);
        cachorro.setIdade(6);
        cachorro.setMebros(4);
        cachorro.abanarORabo();
        cachorro.alimentar();
        cachorro.locomover();
        cachorro.emitirSom();

        Reptil reptil = new Reptil();
        reptil.setPeso(0.30f);
        reptil.setIdade(6);
        reptil.setMebros(4);
        reptil.alimentar();
        reptil.emitirSom();
        reptil.locomover();

        Cobra cobra = new Cobra();
        cobra.setPeso(0.85f);
        cobra.setIdade(1);
        cobra.setMebros(0);
        cobra.alimentar();
        cobra.emitirSom();
        cobra.locomover();

        Tartaruga tartaruga = new Tartaruga();
        tartaruga.setPeso(38);
        tartaruga.setIdade(2);
        tartaruga.setMebros(4);
        tartaruga.setCorEscama("VERDE");
        tartaruga.alimentar();
        tartaruga.locomover();
        tartaruga.emitirSom();

        Peixe peixe = new Peixe();
        peixe.setPeso(0.3f);
        peixe.setIdade(1);
        peixe.setMebros(0);
        peixe.setCorEscama("PRATA");
        peixe.alimentar();
        peixe.emitirSom();
        peixe.locomover();

        GoldFish goldFish = new GoldFish();
        goldFish.setPeso(0.45f);
        goldFish.setIdade(1);
        goldFish.setMebros(0);
        goldFish.setCorEscama("DOURADO");
        goldFish.alimentar();
        goldFish.locomover();
        goldFish.emitirSom();
    }
}