package luyencode;

import java.util.Scanner;

public class vl07 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        long res = 1;
        for (int i = 0; i < k; i++) {
            res *= (n - i);
            res /= (i + 1);
        }
        System.out.println(res);
        sc.close();
    }
}
