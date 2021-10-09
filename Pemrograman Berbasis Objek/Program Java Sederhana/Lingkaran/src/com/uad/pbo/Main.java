package com.uad.pbo;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inputan = new Scanner(System.in);

        int jarijari;
        float pi = 3.14F, keliling, luas;

        System.out.print("Masukkan jari - jari lingkaran : ");
        jarijari = inputan.nextInt();

        System.out.println("Keliling lingkaran = " + 2 * pi * jarijari);
        System.out.println("Luas lingkaran = " + pi * jarijari * jarijari);
    }
}
