import java.util.Scanner;
class student
{
	int rollno;
	int m1,m2;
	Scanner sc = new Scanner(System.in);
	public void getdata()
	{
	  System.out.println("\nEnter Roll No : ");
	  rollno = sc.nextInt();
	 
	  m1= sc.nextInt();
	  m2= sc.nextInt();
	}
	public void putdata()
	{
	System.out.println("\n rollno is:"+rollno);
	System.out.println("\n m1 is:"+m1);
	System.out.println("\n m2 is:"+m2);
	}

}

class Demo6
{
	
	public static void main(String args[])
	{
	student s1=new student();
	s1.getdata();
	s1.putdata();
	}


}