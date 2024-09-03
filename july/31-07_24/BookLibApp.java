class Book
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

class Libarary
{
	Book b1;
	
	void addNewBook(Book book)
	{
		b1 = book;
	}
	void showBook()
	{
		System.out.println(b1.getId()+ "\t" + b1.getName()+"\t" +b1.getPrice());
	}
}
	
	
	
public class BookLibApp
{
	public static void main(String args[])
	{
		Libarary lb = new Libarary();
		
		Book b = new Book();
		
		b.setId(1);
		b.setName("ABC");
		b.setPrice(20000);
		lb.addNewBook(b);
		lb.showBook();
		
	}
}