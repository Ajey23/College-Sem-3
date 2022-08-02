//Write a Java Program that take one number from user making use of JoptionPane class and check whether its Odd number or Even number.

import javax.swing.JOptionPane;
class Q8
{
    public static void main(String args[])
    {
        int num;
        num = Integer.parseInt(JOptionPane.showInputDialog("Enter the number"));

        if(num%2==0)
        
            JOptionPane.showMessageDialog(null, "The given number" + num + " is even number", "The Result", JOptionPane.INFORMATION_MESSAGE );
        
        else 
        JOptionPane.showMessageDialog(null, "The given number " + num + " is odd number ", "The Result", JOptionPane.INFORMATION_MESSAGE );
        


    }
}