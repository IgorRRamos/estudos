package br.com.igorramos;

import java.util.Scanner;
public class DadosRecruta {
    Scanner teclado = new Scanner(System.in);
    private String nome, fone, cpf, sexo, estadoCivil;
    private int idade;


    public String detalhes() {
        return "DadosRecruta{" +
                "nome='" + nome + '\'' +
                ", fone='" + fone + '\'' +
                ", cpf='" + cpf + '\'' +
                ", sexo='" + sexo + '\'' +
                ", estadoCivil='" + estadoCivil + '\'' +
                ", idade=" + idade +
                '}';
    }

    public void verificandoMaioridade(){
        if(this.idade >= 18){
            System.out.println("PENALMENTE INPUTAVEL!");
            System.out.println("SEU ALISTAMENTO E OBRIGATORIO");
        }else{
            System.out.println("IMPOSSIVEL SE ALISTAR!");
        }
    }


    public String getNome() {
        return nome;
    }
    public void setNome() {
        this.nome = nome = teclado.next();
    }

    public String getFone() {
        return fone;
    }

    public void setFone() {
        this.fone = fone = teclado.next();
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf() {
        this.cpf = cpf = teclado.next();
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo() {
        this.sexo = sexo = teclado.next();
    }

    public String getEstadoCivil() {
        return estadoCivil;
    }

    public void setEstadoCivil() {
        this.estadoCivil = estadoCivil = teclado.next();
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade() {
        this.idade = idade = teclado.nextInt();
    }

}
