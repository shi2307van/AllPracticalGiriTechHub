import java.util.*;

class Power
{
	int base,index;
	int p=1;
	Power(int base,int index)
	{
		this.base = base;
		this.index = index;
	}
	int getPower()
	{
		for(int i=1;i<=index;i++)
		{
			p = p*base;
		}
		return p;
	}
}

public class PowerApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the value of base :- ");
		int base = sc.nextInt();
		
		System.out.println("Enter the value of index:-");
		int index = sc.nextInt();
		
		Power p = new Power(base,index);
		int result = p.getPower();
		System.out.println("Power of the number :- " + result);
	}
}