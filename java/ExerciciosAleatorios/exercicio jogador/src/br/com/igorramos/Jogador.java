package br.com.igorramos;
public class Jogador extends Pessoa{
    public String position;
    public int shirtNumber, yellowCard, redCard;

    public Jogador(String name, int age, double heigth) {
        this.name = name;
        this.age = age;
        this.height = height;
    }

    public void card(String cartao){
        if(cartao.equals("red")){
            this.setRedCard(1);
        }else if(cartao.equals("yellow")){
            this.setYellowCard(getYellowCard() + 1);
        }
    }

    public int getYellowCard() {
        return yellowCard;
    }

    public void setYellowCard(int yellowCard) {
        this.yellowCard = yellowCard;
    }

    public int getRedCard() {
        return redCard;
    }

    public void setRedCard(int redCard) {
        this.redCard = redCard;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public int getShirtNumber() {
        return shirtNumber;
    }

    public void setShirtNumber(int shirtNumber) {
        this.shirtNumber = shirtNumber;
    }
}
