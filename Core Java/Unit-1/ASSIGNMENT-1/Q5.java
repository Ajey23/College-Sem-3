//Write a java program to find a area of circle.

import java.util.Scanner;
class Q5
{
    public static void main(String args[])
    {
        int radius;
        double area;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the Radius of the circle: ");
        radius=sc.nextInt();

        area= Math.PI * radius * radius;        //here im using Math.PI without initializing the value of PI in variable
        System.out.println("Area of the circle is: "+area);
    }
}