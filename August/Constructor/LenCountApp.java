import java.util.*;

class LenCount
{
	char c[];
	int count=0;
	LenCount(char c[])
	{
		this.c = c;
	}
	int getLength()
	{
	
		for(int i=0;i<c.length;i++)
		{
			if(c[i] > 0)
			{
				count ++;
			}
		}
		return count;
	}
}
public class LenCountApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		char c[] = new char[5];
		System.out.println("Enter the character in array");
		for(int i=0;i<c.length;i++)
		{
			c[i] = sc.next().charAt(0);
		}
		
		LenCount lc = new LenCount(c);
		int res = lc.getLength();
		
		System.out.println("Length of array :- "+ res);
	}
}