package luyencode;

import java.util.Scanner;

public class vl02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long s = sc.nextLong();
        System.out.println(s * (s + 1) / 2);
        sc.close();
    }
}
