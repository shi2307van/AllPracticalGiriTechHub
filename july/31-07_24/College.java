class Book
{
	int id;
	String name;
	
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
}

class DeptLib
{
	int id;
	String name;
	Book book[];
	
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
	void setBooks(Book ...book)
	{
		this.book = book;
	}
	Book[] getBooks()
	{
		return book;
	}
}

class Library
{
	DeptLib dept[];
	
	void setLibraries(DeptLib ...d)
	{
		dept = d;
	}
	
	void showDetails()
	{
		for(int i=0;i<dept.length;i++)
		{
			
			System.out.println("Id \t Name");
			System.out.println(dept[i].getId() + "\t" + dept[i].getName());
			Book b[] = dept[i].getBooks();
			System.out.println("======================================");
			for(int j=0;j<b.lengthl;j++)
			{
				System.out.println(b[j].getId() + "\t" + b[j].getName());
			}
			System.out.println("Total book count is "+b.length);
			System.out.println("======================================");
		}
	}
}

public class College
{
	public static void main(String x[])
	{
		Book b1 = new Book();
		b1.setId(1);
		b1.setName("Java");
		
		Book b2 = new Book();
		b2.setId(2);
		b2.setName("Python");
		
		DeptLib d1 = new DeptLib();
		d1.setId(1);
		d1.setName("CSE");
		d1.setBooks(b1,b2);
		
		Book b3 = new Book();
		b3.setId(3);
		b3.setName("MERN");
		
		Book b4 = new Book();
		b4.setId(4);
		b4.setName("Sql");
		
		DeptLib d2 = new DeptLib();
		d2.setId(2);
		d2.setName("IT");
		d2.setBooks(b3,b4);
		
		Library l = new Library();
		l.setLibraries(d1,d2);
		l.showDetails();
	}
}