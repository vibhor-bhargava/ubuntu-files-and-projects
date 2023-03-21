package HackerRank;
//import java.lang.Math;
//import java.math.BigInteger;
import java.util.Scanner;

public class EasyProblems {

    // Java Loops II
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int q = sc.nextInt(); //no. of queries

        int[][] query = new int[q][3];

        //taking input of queries [a, b, n]
        for (int i = 0; i < q; i++) {
            for (int j = 0; j < 3; j++) {
                query[i][j] = sc.nextInt();
            }
        }


        //printing series for each query[i]
        for (int i = 0; i < q; i++) {
            int n = query[i][2], term = query[i][0];

            for (int j = 0; j < n; j++) {
                term += query[i][1] * (int)Math.pow(2.0, j);
                System.out.printf("%d ", term);
            }

            System.out.println();
        }
    }//*/


    // Java Datatypes
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); //no of test cases

        BigInteger[] num = new BigInteger[t]; //array of nos. to be tested

        for (int i = 0; i < t; i++) {
            num[i] = sc.nextBigInteger(); //take input of nos.
        }

        //processing every BigInteger no., determining if it fits in any primitive data-types
        for (BigInteger a:
             num) {
            boolean inByte = (a.compareTo(BigInteger.valueOf(Byte.MIN_VALUE)) >= 0 &&
                              a.compareTo(BigInteger.valueOf(Byte.MAX_VALUE)) <= 0),

                    inShort = (a.compareTo(BigInteger.valueOf(Short.MIN_VALUE)) >= 0 &&
                               a.compareTo(BigInteger.valueOf(Short.MAX_VALUE)) <= 0),

                    inInt = (a.compareTo(BigInteger.valueOf(Integer.MIN_VALUE)) >= 0 &&
                             a.compareTo(BigInteger.valueOf(Integer.MAX_VALUE)) <= 0),

                    inLong = (a.compareTo(BigInteger.valueOf(Long.MIN_VALUE)) >= 0 &&
                              a.compareTo(BigInteger.valueOf(Long.MAX_VALUE)) <= 0);

            if (inLong || inInt || inShort || inByte)
            {
                System.out.println(a + " can be fitted in:");

                if (inByte)
                    System.out.println("* byte");

                if (inShort)
                    System.out.println("* short");

                if (inInt)
                    System.out.println("* int");

                if (inLong)
                    System.out.println("* long");
            }
            else
                System.out.println(a + " can't be fitted anywhere.");
        }
    }//*/


    // Java Static Initializer Block
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int b = sc.nextInt();
        int h = sc.nextInt();

        if (b > 0 && h > 0)
            System.out.println(b * h);
        else
            System.out.println("java.lang.Exception: Breadth and height must be positive");
    }//*/
}