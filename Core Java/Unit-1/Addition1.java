//addition of 2 number get input from user

import java.util.Scanner;
class Addition1
{
    public static void main(String args[])
    {
        int n1, n2, add;
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter 1st number : ");
        n1 = scan.nextInt();
        System.out.println("Enter 2nd number : ");
        n2 = scan.nextInt();

        add=n1+n2;
        System.out.println("Addition is : "+add);
    }
}