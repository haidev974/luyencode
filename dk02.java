package luyencode;

import java.util.Scanner;

public class dk02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        a = Math.max(a, b);
        a = Math.max(a, c);
        System.out.println(a);
        sc.close();
    }
}
