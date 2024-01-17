package luyencode;

import java.util.Scanner;

public class dk04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double n = sc.nextDouble();
        int m = (int) n;
        if (n >= 0) {
            if (n - m >= 0.5) {
                System.out.println(m + 1);
            } else {
                System.out.println(m);
            }
        } else {
            if (n - m > -0.5) {
                System.out.println(m);
            } else {
                System.out.println(m - 1);
            }
        }
        // System.out.println(Math.round(n));
        sc.close();
    }
}
