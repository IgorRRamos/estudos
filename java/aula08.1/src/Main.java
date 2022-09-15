import br.com.igorramos.*;

public class Main {
    public static void main(String[] args) {
        Visitante convidado = new Visitante();
        Aluno estudante = new Aluno();
        Bolsista alunoBolsista = new Bolsista();
        Professor instrutor = new Professor();
        Tecnico alunoTecnico = new Tecnico();

        convidado.setNome("Tadeu");
        convidado.setIdade(55);
        convidado.setSexo("M");
        System.out.println(convidado.detalhesPessoa());

        estudante.setNome("Joaozinho");
        estudante.setIdade(8);
        estudante.setSexo("M");
        estudante.pagarMensalidade();
        System.out.println(estudante.detalhesPessoa());

        alunoBolsista.setNome("Guilherme");
        alunoBolsista.setIdade(15);
        alunoBolsista.setSexo("M");
        alunoBolsista.setBolsa(12.5f);
        alunoBolsista.pagarMensalidade();
        alunoBolsista.renovarBolsa();
        System.out.println(alunoBolsista.detalhesPessoa());

        instrutor.setNome("Gustavo");
        instrutor.setIdade(31);
        instrutor.setSexo("M");
        instrutor.setSalario(3.500f);
        instrutor.receberAumento(312);
        instrutor.detalhesPessoa();

        alunoTecnico.setNome("Rhian");
        alunoTecnico.setIdade(15);
        alunoTecnico.setSexo("M");
        alunoTecnico.praticar();
        alunoTecnico.setRegistroProfissional(15469);
        System.out.println(alunoTecnico.detalhesPessoa());

    }
}