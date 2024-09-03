class Value
{
	int a,b;
	
	void setValue(int x,int y)
	{
		a = x;
		b = y;
	}
	int getResult()
	{
		return 0;
	}
}

class Add extends Value{
	int getResult()
	{
		return a + b;
	}
}
class Mul extends Value{
	int getResult()
	{
		return a * b;
	}
}

public class DynamicPolyApp
{
	public static void main(String args[])
	{
		Value v = null;
		v = new Add();
		v.setValue(10,20);
		
		int res = v.getResult();
		System.out.printf("Addition is %d \n",res);
		
		v = new Mul();
		v.setValue(5,7);
		
		res = v.getResult();
		System.out.printf("Multiplication is %d \n",res);
	}
}