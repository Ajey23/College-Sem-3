//Java program to get user input in getdata() class and print on screen
class student
{
    int rollno;
    int m1, m2;
    public void getdata()
    {
        rollno=100;
        m1=72;
        m2=88;
    }
    public void putdata()
    {
        System.out.println("\n Roll Number is : "+rollno);
        System.out.println("\n Mark1 is : "+m1);
        System.out.println("\n Mark2 is : "+m2);
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