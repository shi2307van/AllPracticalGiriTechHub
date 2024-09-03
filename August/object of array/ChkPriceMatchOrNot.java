import java.util.*;

class Price
{
	int id;
	int price;
	String name;
	
	void setId(int id)
	{
		this.id = id;
	}
	void setName(String name)
	{
		this.name = name;
	}
	void setPrice(int price)
	{
		this.price = price;
	}
	int getId()
	{
		return id;
	}
	int getPrice()
	{
		return price;
	}
	String getName()
	{
		return name;
	}
}

public class ChkPriceMatchOrNot
{
	public static void main(String args[])
	{
		Price p[] = new Price[3];
		Scanner sc = new Scanner(System.in);
		for(int i=0;i<p.length;i++)
		{
			p[i] = new Price();	
			
			System.out.println("Enter the id ,percentage and name of the student");
			int id = sc.nextInt();
			int price = sc.nextInt();
			sc.nextLine();
			String name = sc.next();
			
			p[i].setId(id);
			p[i].setName(name);
			p[i].setPrice(price);
			
		}
		boolean found = false;
		for(int i=0;i<p.length;i++)
		{
			for(int j=i+1;j<p.length;j++)
			{
				if(p[i].getPrice() == p[j].getPrice())
				{
					System.out.println("Price Match");
					System.out.println("ID :-"+p[i].getId()+"\n Name :- "+p[i].getName()+"\n Price :-"+p[i].getPrice());
					System.out.println("ID :-"+p[j].getId()+"\n Name :- "+p[j].getName()+"\n Price :-"+p[j].getPrice());
					found = true;
				}
			}
		}
		if(!found)
		{
				System.out.println("Price not match");
		}
	
	}
}