import java.util.*;
class FindMax
{
	int a ;
	int b;
	
	Scanner sc = new Scanner();
	
	System.out.println("Enter the value of a :- ");
	a = sc.nextInt();
	System.out.println("Enter the value of b :- ");
	b = sc.nextInt();
	
	if(a > b)
	{
		System.out.println("A is maximum");
	}
	else
	{
		System.out.pritnln("B is maximum");
	}
}