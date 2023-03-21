package com.company;
//import java.util.Arrays;
//import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    // WAYS TO DECLARE AND PRINT 1D-ARRAYS
    /*public static void main(String[] args) {
        int[] a = new int[5]; //Java style array declaration
//        int[] a = {1,2,3,4,5}; //J-style arr. declaration & initialisation
//        int a[] = new int[5]; //C style declaration

        //input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 5 nos:");

        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }

        //output
        System.out.println("\nThe nos are:");

        //using for loop
//        for (int i = 0; i < 5; i++) {
//            System.out.println(a[i]);
//        }
        
        //using foreach loop
        for (int i:a) {
            System.out.println(i);
        }
        
        //using Arrays class from Collections framework
//        System.out.println(Arrays.toString(a));
    }//*/


    // BigInteger class
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a = sc.nextBigInteger();

        if (a.compareTo(BigInteger.valueOf(Integer.MIN_VALUE)) >= 0 &&
                a.compareTo(BigInteger.valueOf(Integer.MAX_VALUE)) <= 0)
        {
            System.out.println(a + " can fit in int");
        }
        else
            System.out.println(a + " can NOT fit in int");
    }//*/


    // Static & non-static methods
    /*static int add(int a, int b){
        return a+b;
    }

    int subtract(int a, int b){
        return a-b;
    }

    public static void main(String[] args) {
        System.out.println(add(2,3)); //call static method, without class obj

        Main obj = new Main(); //create Main class obj to call non-static method
        System.out.println(obj.subtract(3, 2)); //call non-static method
    }//*/


    // METHOD OVERLOADING
    /*static void fun(){
        System.out.println("Simplest fun");
    }

    static void fun(int n){
        System.out.println("fun has" + n);
    }

    static int fun(int m, int n){
        return m+n;
    }

    public static void main(String[] args) {
        fun();
        fun(69);
        System.out.println(fun(6, 9));
    }//*/


    // Variable Arguments
    /*static int add(int ...arr) {
        int sum = 0;

        for (int i:
             arr) {
            sum += i;
        }

        return sum;
    }

    public static void main(String[] args) {
        System.out.println(add());
    }//*/



}