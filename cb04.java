package luyencode;

import java.util.Scanner;

public class cb04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(a + b);
        System.out.println(a - b);
        System.out.println(a * b);
        if (b == 0) {
            System.out.println("ERROR");
        } else {
            System.out.printf("%.2f", (float) a / b);
        }
        sc.close();
    }
}
