import java.util.*;

class Sum
{
	int a[],sum=0;
	Sum(int a[])
	{
		this.a = a;
	}
	int getSum()
	{
		for(int i=0;i<a.length;i++)
		{
			sum = sum + a[i];
		}
		return sum;
	}
}
public class SumApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		int a[] = new int[5];
		System.out.println("Enter the value of array:-");
		for(int i=0;i<a.length;i++)
		{
			a[i] = sc.nextInt();
		}
		
		Sum s = new Sum(a);
		int result = s.getSum();
		System.out.println("Sum of array element :- "+result);
	}
}