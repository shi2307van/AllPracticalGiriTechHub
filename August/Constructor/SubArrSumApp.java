import java.util.*;

class SubArrSum
{
	int a[];
	int sumValue;
	
	SubArrSum(int a[],int sumValue)
	{
		this.a = a;
		this.sumValue = sumValue;
	}
	void findSum()
	{
		boolean found = false;
		for(int i=0;i<a.length;i++)
		{
			for(int j=i+1;j<a.length;j++)
			{	
		
				if(a[i] + a[j]==sumValue)
				{
					System.out.printf("Subarray : - [%d,%d]",a[i],a[j]);
					found=true;
					break;
				}
			}
		}
		if(!found)
		{
			System.out.println("Sub array not found !!!!");
		}
	}
}

public class SubArrSumApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		int a[] = new int[5];
		
		System.out.println("Enter the value in array :-");
		for(int i=0;i<a.length;i++)
		{
			a[i] = sc.nextInt();
		}
		System.out.println("Enter the target value :-");
		int target = sc.nextInt();
		
		SubArrSum sa = new SubArrSum(a,target);
		sa.findSum();
	}
}