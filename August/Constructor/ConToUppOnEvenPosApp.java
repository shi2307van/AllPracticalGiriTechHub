import java.util.*;

class ConToUppOnEvenPos
{
	char c[];
	
	ConToUppOnEvenPos(char c[])
	{
		this.c = c;
	}
	void convert()
	{
		for(int i=0;i<c.length;i++)
		{
			if(i%2==0)
			{
				c[i] = Character.toUpperCase(c[i]);
			}
		}
	}
	char [] getConvertedArray()
	{
		return c;
	}
}

public class ConToUppOnEvenPosApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		char c[] = new char[5];
		System.out.println("Enter the character in array :- ");
		for(int i=0;i<c.length;i++)
		{
			c[i] = sc.next().charAt(0);
		}
		
		ConToUppOnEvenPos cuep = new ConToUppOnEvenPos(c);
		cuep.convert();
		char ch[] = cuep.getConvertedArray();
		System.out.println(ch);
	}
}