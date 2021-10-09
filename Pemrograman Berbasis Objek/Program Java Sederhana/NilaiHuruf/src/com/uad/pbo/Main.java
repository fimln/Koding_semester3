package com.uad.pbo;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner inputan = new Scanner(System.in);

        int nilai;
        System.out.print("Masukkan nilai : ");
        nilai = inputan.nextInt();

        if (nilai>=80 && nilai<=100) {
            System.out.println("Nilai huruf : A");
        } else if (nilai>=65 && nilai<=79) {
            System.out.println("Nilai huruf : B");
        } else if (nilai>=55 && nilai<=64) {
            System.out.println("Nilai huruf : C");
        } else if (nilai>=40 && nilai<=54) {
            System.out.println("Nilai huruf : D");
        } else System.out.println("Nilai huruf : E");
    }
}
