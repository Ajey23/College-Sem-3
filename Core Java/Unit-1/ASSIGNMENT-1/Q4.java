// Write a program to calculate the simple intrest and ask the user to input required values.

import java.util.Scanner;
class Q4
{
    public static void main(String args[])
    {
        double P,R,T,SI;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the Principal: ");
        P=sc.nextDouble();
        System.out.println("Enter the Rate: ");
        R=sc.nextDouble();
        System.out.println("Enter the Time: ");
        T=sc.nextDouble();

        SI=(P * T * R)/100;     //Formula for simple intrest

        System.out.println("Simple Intrest is: "+SI);
    }
}