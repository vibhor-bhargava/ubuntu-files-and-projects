package codeWithHarryPractice;
import java.util.Scanner;

public class Arrays {

    //2: Find out if a given no. is in an array
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 5 nos.:");
        int[] a = new int[5];

        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }

        System.out.print("\nEnter a no. you want to search: ");
        int n = sc.nextInt();

        boolean numIsPresent = false;

        for (int i:
                a) {
            if (i == n) {
                numIsPresent = true;
                break;
            }
        }

        if (numIsPresent)
            System.out.printf("%d is present in array", n);
        else
            System.out.printf("%d is NOT present in array", n);
    }//*/


    //3: Matrix Addition
    /*public static void main(String[] args) {
        int[][] m1 = {{1,2,3}, {4,5,6}};
        int[][] m2 = {{11,22,33}, {44,55,66}};
        int[][] res = {{0,0,0}, {0,0,0}};

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                res[i][j] = m1[i][j] + m2[i][j];
                System.out.printf("%d ", res[i][j]);
            }
            System.out.println();
        }
    }//*/

    //8: Find out if an array is sorted
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 6 nos:");
        int[] a = new int[6];

        for (int i = 0; i < 6; i++) {
            a[i] = sc.nextInt();
        }

        boolean isSorted = true;

        for (int i = 0; i < a.length - 1; i++) {
            if (a[i+1] < a[i]){
                isSorted = false;
                break;
            }
        }

        if (isSorted)
            System.out.println("Array is sorted");
        else
            System.out.println("Array is NOT sorted");
    }//*/
}