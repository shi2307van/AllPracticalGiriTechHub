abstract class Number 
{
	int no;
	void setNumber(int no)
	{
		this.no = no;
	}
	abstract int getNo();
}
class Rev extends Number
{	
	int getNo()
	{
		int r = 0;
		while(no!=0)
		{
			int rem=no%10;
			no =no/10;
			r = r*10+rem;
		}
		return r;
	}
}
class SumOfDIgit extends Number
{
	int getNo()
	{
		int s=0;
		while(no!=0)
		{
			int rem = no%10;
			no = no/10;
			s = s+rem;
		}
		return s;
	}
}

class NumberOperation
{
	void setNumberOperation(Number n)
	{
		int res = n.getNo();
		System.out.println("Result is "+res);
	}
}
public class LooseCouplingApp
{
	public static void main(String aegs[])
	{
		Number num = null;
		NumberOperation nop = new NumberOperation();
		
		num = new Rev();
		num.setNumber(123);
		nop.setNumberOperation(num);
		
		num = new SumOfDIgit();
		num.setNumber(123);
		nop.setNumberOperation(num);
	}
}
