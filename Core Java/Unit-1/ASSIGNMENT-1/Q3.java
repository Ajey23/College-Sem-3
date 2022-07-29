//Write a java program that will accept a number from the user and calculate its Squre and Cube and display the same.

import java.util.Scanner;
class Q3
{
    public static void main(String args[])
    {
        int num;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the number: ");
        num=sc.nextInt();

        System.out.println("Square of "+ num + " is: "+ Math.pow(num,2));
        System.out.println("Cube of "+ num + " is: "+ Math.pow(num,3));
    }
}
