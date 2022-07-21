class student
{
	int rollno;
	int m1,m2;
	public void getdata()
	{
	rollno=101;
	m1=56;
	m2=45;
	}
	public void putdata()
	{
	System.out.println("\n rollno is:"+rollno);
	System.out.println("\n m1 is:"+m1);
	System.out.println("\n m2 is:"+m2);
	}

}

class Demo4
{
	
	public static void main(String args[])
	{
	student s1=new student();
	s1.getdata();
	s1.putdata();
	}


}