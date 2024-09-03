class Per
{
	int p;
	void calPer(int a[])
	{
		int agg =0;
		for(int i=0;i<a.length;i++)
		{
			agg = agg + a[i];
		}
		p = agg/a.length;
	}
}

class Eight extends Per
{
	void showEightPer()
	{
		System.out.println("Eight percentage is :- "+p);
	}
}

class Nine extends Per
{
	void showNinePer()
	{
		System.out.println("Nine percentage is :- "+p);
	}
}

class Ten extends Per
{

	void calPer(int a[])
	{
		int agg = 0;
		/*for(int i=0;i<a.length;i++)
		{
			for(int j=i+1;j<a.length;j++)
			{
				if(a[i]<a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		*/
		for(int i=0;i<(a.length-1);i++)
		{
			agg = agg + a[i];
		}
		p = agg/(a.length-1);
	}
	void showTenPer()
	{
		System.out.println("Ten percentage is :- "+p);
	}
}

public class BestFiveApp
{
	public static void main(String args[])
	{	
		int arr[] = new int[]{60,70,80,90,80,70};
		
		Eight e = new Eight();
		e.calPer(arr);
		e.showEightPer();
		
		Nine n = new Nine();
		n.calPer(arr);
		n.showNinePer();
		
		Ten t = new Ten();
		t.calPer(arr);
		t.showTenPer();
	}
}