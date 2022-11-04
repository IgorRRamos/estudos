package br.com.igorramos;

public abstract class Pessoa {
    public String name;
    public int age;
    public double height;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public void setHeight(float height) {
        this.height = height;
    }
}
