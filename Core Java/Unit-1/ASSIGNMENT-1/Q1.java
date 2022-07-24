// Write a Java program that will convert the given temprature in ferentheit to calcius using the formula C=(F-32)/1.8

import java.util.Scanner;
class Q1
{
    public static void main(String args[])
    {
        float F;
        double Cel;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter Temprature in Ferentheit : ");
        F=sc.nextFloat();

        Cel=(F-32)/1.8;
        System.out.println("\nCelcius is : "+Cel);
    }

}