//Write a java program to find a area of circle.

import java.util.Scanner;
class Q5
{
    public static void main(String args[])
    {
        int radius;
        double pie=3.14,area;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the Radius of the circle: ");
        radius=sc.nextInt();

        area= pie * radius * radius;
        System.out.println("Area of the circle is: "+area);
    }
}