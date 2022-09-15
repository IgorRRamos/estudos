import br.com.igorramos.Aluno;
import br.com.igorramos.Funcionario;
import br.com.igorramos.Professor;

public class Main {
    public static void main(String[] args) {
        Aluno p1 = new Aluno();
        Professor p2 = new Professor();
        Funcionario p3 = new Funcionario();

        p1.setNome("IGOR");
        p1.setIdade(25);
        p1.setSexo("M");
        p1.setCurso("PROGRAMACAO");

        p2.setNome("FELIPE");
        p2.setIdade(23);
        p2.setSexo("M");
        p2.setEspecialidade("PROFESSOR DE POO");
        p2.setSalario(2.500f);
        p2.receberAum(500);

        p3.setNome("YASMIN");
        p3.setIdade(22);
        p3.setSexo("F");
        p3.mudarTrabalho();
        p3.setSetor("COZINHA");


        System.out.println(p1.detalhesPessoa());
        System.out.println("\n");

        System.out.println(p2.detalhesPessoa());
        System.out.println("\n");

        System.out.println(p3.detalhesPessoa());
        System.out.println("\n");
    }
}