package luyencode;

import java.util.Scanner;

public class vl05 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        n = 3 * n + 1;
        long res = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0)  res -= i;
            else  res += i;
        }
        System.out.println(res);
        sc.close();
    }
}
