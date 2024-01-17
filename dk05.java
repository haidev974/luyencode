package luyencode;

import java.util.Scanner;

public class dk05 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        if (KTscp(a))
            System.out.println("YES");
        else
            System.out.println("NO");
        sc.close();
    }

    public static boolean KTscp(long a) {
        long b = (int) Math.sqrt(a);
        if (b * b == a)
            return true;
        return false;
    }
}
