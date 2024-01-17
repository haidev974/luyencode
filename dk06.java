package luyencode;

import java.util.Scanner;

public class dk06 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if (a == 0 && b == 0)
            System.out.println("WOW");
        else if (a == 0 && b != 0)
            System.out.println("NO");
        else
            System.out.printf("%.2f", (float) -b / a);
        sc.close();
    }
}
