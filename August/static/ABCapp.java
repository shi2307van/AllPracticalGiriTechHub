class ABC
{
	static int a;
	int b;
}

public class ABCapp
{	
	public static void main(String args[])
	{
		ABC a1 = new ABC();
		ABC a2 = new ABC();
		a1.a = 100;
		a1.b = 200;
		System.out.println("With first object");
		System.out.printf("A=%d \t B = %d \n",a1.a,a1.b);
		System.out.println("With second object");
		System.out.printf("A=%d \t B = %d \n",a2.a,a2.b);
	}
}
