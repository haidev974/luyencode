package luyencode;

import java.util.Scanner;

public class vl04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double res = 0.0;
        for (int i = 2; i <= n; i++) {
            res += 1.0 / i;
        }
        System.out.printf("%.4f", res);
        sc.close();
    }
}
