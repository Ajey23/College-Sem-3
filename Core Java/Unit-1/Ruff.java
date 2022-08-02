//	traversing array with for-each loop

class Ruff
{
	public static void main(String args[])
	{
		//declaring an array
		int arr[]={11,12,13,14,15};

		//method 1
		for(int i:arr)
		{
			i=i*10;
			System.out.println(i);
		}

		//method 2
		for(int i=0; i<arr.length; i++)
		{
			System.out.println(arr[i]);
		}
	}
}