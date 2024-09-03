import java.util.*;

class FindArmstrong
{
	int limit;
	FindArmstrong(int limit)
	{
		this.limit = limit;
	}
	void showAllNumbersBetweenLimit()
	{
		for(int num=1;num<=limit;num++)
		{
			int rem,res=0;
			int temp = num;
			while(temp > 0)
			{
				rem = temp%10;
				res = res+rem*rem*rem;
				temp=temp/10;
			}
			if(num==res)
			{
				System.out.println(num);
			}
		}
	}
}

public class FindArmstrongApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("ENter the limit :-");
		int limit = sc.nextInt();
		
		FindArmstrong fa = new FindArmstrong(limit);
		fa.showAllNumbersBetweenLimit();
	}
}