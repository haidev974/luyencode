package luyencode;

import java.util.Scanner;

public class cb07 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float r = sc.nextFloat();
        System.out.printf("%.3f %.3f", (2 * r * 3.14), (r * r * 3.14));
        sc.close();
    }
}

