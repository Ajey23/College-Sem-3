//Write a jav program that eill ask the user to input two numbers, Perform all the arithmaetic operation on it.

import java.util.Scanner;
class Q6
{
    public static void main(String args[])
    {
        int n1,n2;
        Scanner sc=new Scanner(System.in);

        // Input 2 numbers from user
        System.out.println("Enter first number: ");
        n1=sc.nextInt();
        System.out.println("Enter second number: ");
        n2=sc.nextInt();

        // Perform arithmatic operations
        int add=n1+n2;
        int sub=n1-n2;
        int multi=n1*n2;
        int div=n1/n2;
        int mod=n1%n2;

        // Print on screen
        System.out.println("\nAddition: "+add);
        System.out.println("Subtraction: "+sub);
        System.out.println("Multiplication: "+multi);
        System.out.println("Division: "+div);
        System.out.println("Modulus: "+mod);
        
        
        
    }
}