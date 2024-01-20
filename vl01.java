package luyencode;

import java.util.Scanner;

public class vl01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        for (int i = a; i < b + 1; i++)
            System.out.print(i + " ");
        sc.close();
    }
}
