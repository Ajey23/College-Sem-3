//Java program to get user input in getdata() class and print on screen

import java.util.Scanner;
class student
{
    int rollno;
    int m1,m2;
    Scanner sc= new Scanner(System.in);
    public void getdata()
    {
        System.out.println("\nEnter Roll No: ");
        rollno=sc.nextInt();

        System.out.println("\nEnter Mark1: ");
        m1=sc.nextInt();

        System.out.println("\nEnter Mark2: ");
        m2=sc.nextInt();
    }
    public void putdata()
    {
        System.out.println("\nRollno is: "+rollno);
        System.out.println("\nMark 1 is: "+m1);
        System.out.println("\nMark 2 is: "+m2);
    }
}
class getdata
{
    public static void main(String args[])
    {
        student s1=new student();
        s1.getdata();
        s1.putdata();
    }
}