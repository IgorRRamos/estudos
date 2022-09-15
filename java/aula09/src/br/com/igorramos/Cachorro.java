package br.com.igorramos;

import java.sql.SQLOutput;

public class Cachorro extends Animal{
    public void enterrarOsso(){
        System.out.println("ENTERRANDO OSSO...");
    }

    public void abanarORabo(){
        System.out.println("ABANANDO O RABO...");
    }

    @Override
    public void locomover() {
        System.out.println("CORRENDO...");
    }

    @Override
    public void alimentar() {
        System.out.println("MAMANDO...");
    }

    @Override
    public void emitirSom() {
        System.out.println("LATINDO...");
    }
}
