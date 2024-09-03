import java.util.*;

public class SavingTax
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the amount you earn");
		int earn = sc.nextInt();
		
		System.out.println("Enter the amount you want invest");
		int invest = sc.nextInt();
		
		System.out.println("Do not pay the taxes for amount :- " + earn-invest);
	}
}