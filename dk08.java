package luyencode;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        String d = sc.next();
        double b = sc.nextDouble();
        switch (d) {
            case "+":
                System.out.printf("%.2f", (float) a + b);
                break;
            case "-":
                System.out.printf("%.2f", (float) a - b);
                break;
            case "*":
                System.out.printf("%.2f", (float) a * b);
                break;
            case "/":{
                if (b == 0) {
                    System.out.println("Math Error");
                } else {
                    System.out.printf("%.2f", (float) a / b);
                }
                break;
            }
        }
        sc.close();
    }
}
