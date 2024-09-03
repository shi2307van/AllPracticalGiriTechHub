import java.util.*;
class Book
{
	int id;
	String name;
	int price;
	
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
	String getName()
	{
		return name;
	}
	int getPrice()
	{
		return price;
	}
}


public class BookApp
{
	public static void main(String args[])
	{
		int size;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size");
		size = sc.nextInt();
		Book b[] = new Book[size];
		
		for(int i=0;i<size;i++)
		{
			b[i] = new Book();
			
			
			
			System.out.println("Enter the id ,price,name of the book");
			
			int id = sc.nextInt();
			int price = sc.nextInt();
			sc.nextLine();
			String name = sc.next();
			
			b[i].setName(name);
			b[i].setId(id);
			b[i].setPrice(price);
		}
		System.out.print("Display the all records \n");
		for(int i=0;i<size;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if(b[i].getPrice()<b[j].getPrice())
				{
						Book temp = b[i];
						b[i] = b[j];
						b[j] = temp;
				}
			}
		}
		
		for(int i=0;i<size;i++)
		{
			System.out.println(b[i].getId()+"\t"+b[i].getName()+"\t"+b[i].getPrice());
		}
	}
}