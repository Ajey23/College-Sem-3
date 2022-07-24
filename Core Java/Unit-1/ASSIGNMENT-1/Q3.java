//Write a java program that will accept a number from the user and calculate its Squre and Cube and display the same.

import java.util.Scanner;
class Q3
{
    public static void main(String args[])
    {
        int num,square,cube;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the number: ");
        num=sc.nextInt();

        square=num*num;
        cube=num*num*num;
        System.out.println("The Square is: "+square);
        System.out.println("The Cube is: "+cube);
    }
}