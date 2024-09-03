import java.util.*;
abstract class Palindrom
{
	abstract void setString(String str);
	abstract void isPalindrom();
}

class CheckPalindrom extends Palindrom
{
	String str;
	void setString(String str)
	{
		this.str = str;
	}
	void isPalindrom()
	{
		char ch[] = str.toCharArray();
		int i,j;
		boolean flag = false;
		for(i=0,j=ch.length-1;i<ch.length/2;i++,j--)
		{
			if(ch[i]!=ch[j])
			{
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			System.out.println("String is palindrome");
		}
		else
		{
			System.out.println("String is not palindrome");
		}
	}
}

public class PalindromStringApp
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string :- ");
		String s = sc.nextLine();
		CheckPalindrom p = new CheckPalindrom();
		p.setString(s);
		p.isPalindrom();
	}
}