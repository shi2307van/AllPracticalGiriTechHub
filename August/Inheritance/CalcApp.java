class Value
{
	int a,b;
	void setValue(int x,int y)
	{
		a = x;
		b = y;
	}
}
class Add extends Value
{
	int getAdd()
	{
		return a + b;
	}
}
class Mul extends Value
{
	int getMul()
	{
		return a* b;
	}
}
public class CalcApp
{
	public static void main(String args[])
	{
		Add ad = new Add();
		ad.setValue(10,20);
		int res = ad.getAdd();
		System.out.println("Addition is "+ res);
		
		Mul m = new Mul();
		m.setValue(10,20);
		res = m.getMul();
		System.out.println("Multiplication is "+res);
	}
}