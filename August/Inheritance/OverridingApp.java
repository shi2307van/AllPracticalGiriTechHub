class P
{
	private void setValue()
	{
		System.out.println("I am P ");
	}
}
class C extends P
{
	 void setValue()
	{
		super.setValue();
		System.out.println("I am C ");
	}
	
}

public class OverridingApp
{
	public static void main(String args[])
	{
		C c1 = new C();
		c1.setValue();
		
	}
}