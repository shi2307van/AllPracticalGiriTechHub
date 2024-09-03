class Product 
{
	int id;
	String name;
	int price;
	
	void setId(int id)
	{
		this.id = id;
	}
	
	int getId()
	{
		return id;
	}
	
	void setName(String name)
	{
		this.name = name;
	}
	
	String getName()
	{
		return name;
	}
	
	void setPrice(int price)
	{
		this.price = price;
	}
	
	int getPrice()
	{
		return price;
	}
}

class Shop
{
	void setProduct(Product ...p)
	{
		for(int i=0;i<p.length;i++)
		{
			System.out.println(p[i].getId()+ "\t" + p[i].getName() + "\t" + p[i].getPrice());
		}
	}
}

public class ShopApp
{
	public static void main(String args[])
	{
		Shop s1 = new Shop();
		
		Product p1 = new Product();
		
		p1.setId(1);
		p1.setName("Soap");
		p1.setPrice(30);
		
		Product p2 = new Product();
		
		p2.setId(2);
		p2.setName("Pen");
		p2.setPrice(10);
		
		Product p3 = new Product();
		
		p3.setId(3);
		p3.setName("pin");
		p3.setPrice(5);
		
		s1.setProduct(p1,p2,p3);
	}
}