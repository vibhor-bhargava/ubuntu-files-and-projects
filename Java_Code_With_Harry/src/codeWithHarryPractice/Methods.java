package codeWithHarryPractice;

import java.util.Scanner;

public class Methods {
    // Print n Fibonacci nos.
    /*static int fibonacci(int n, int[] fib) { //n: position
        if (fib[n-1] > -1)
            return fib[n-1];

        if (n == 1){
            fib[0] = 0;
            return 0;
        }

        if (n == 2){
            fib[1] = 1;
            return 1;
        }

        fib[n-1] = fibonacci(n-1, fib) + fibonacci(n-2, fib);
        return fib[n-1];
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

//        System.out.print("How many Fibonacci nos. do you want? ");
        System.out.print("Which position's Fibonacci term do you want? ");
        int n = sc.nextInt();

        int[] fib = new int[n]; //array to store n Fib. nos

        for (int i = 0; i < n; i++) {
            fib[i] = -1; //filling default garbage value in memoization array
        }

        System.out.println("Your Fibonacci series:");
        for (int i = 1; i <= n; i++)
        {
            if (fib[i-1] == -1)
                System.out.print(fibonacci(i, fib) + " ");
            else
                System.out.print(fib[i-1] + " ");
        }

        //5: nth Fibonacci term
        //System.out.println(fibonacci(n, fib));
    }//*/


    //3: Sum of 1st n natural nos.
    /*static int sumOfFirstNNaturalNos(int n) {
        if (n == 1)
            return 1;
        return n + sumOfFirstNNaturalNos(n-1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("How many natural nos? ");
        int n = sc.nextInt();

        System.out.println("Sum of 1st " + n + " natural nos: " + sumOfFirstNNaturalNos(n));
    }//*/


    //6: Find average of a set of nos.
    /*static double mean(int ...num) {
        int n = 0, sum = 0;

        for (int i:
             num) {
            sum += i;
            n += 1;
        }

        if (n == 0) {
            System.out.println("No average");
            System.exit(0);
        }

        return sum / (double) n;
    }

    public static void main(String[] args) {
        System.out.println(mean(4,2,1));
    }//*/


    //7: Pattern 1
    /*static void pattern(int i, int j) { //i: row no, j: col no
        if (i < 1)
            System.exit(0);

        if (j > i) {
            System.out.println();
            pattern(i-1, 1);
            return;
        }

        System.out.printf("* ");
        pattern(i, j+1);
    }

    public static void main(String[] args) {
        int n = 4;

        //recursive approach
        pattern(n, 1);

        //iterative approach
//        for (int i = n; i >= 1; i--) {
//            for (int j = 1; j <= i; j++) {
//                System.out.print("* ");
//            }
//            System.out.println();
//        }
    }//*/


    //8: Pattern 2
    /*static void pattern(int i, int j, int n) {
        if ( i > n)
            System.exit(0);

        if (j > i) {
            System.out.println();
            pattern(i+1, 1, n);
        }

        System.out.print("* ");
        pattern(i, j+1, n);
    }

    public static void main(String[] args) {
        pattern(1, 1, 4);
    }//*/
}