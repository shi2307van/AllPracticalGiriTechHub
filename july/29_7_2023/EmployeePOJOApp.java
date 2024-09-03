class Employee
{
	private int id;
	private String name;
	
	public void setId(int id)
	{
		this.id = id;
	}
	public int getId()
	{
		return id;
	}
	
	public void setName(String name)
	{
		this.name = name;
	}
	
	public String getName()
	{
		return name;
	}
}

public class EmployeePOJOApp
{
	public static void main(String args[])
	{
		Employee e = new Employee();
		e.setId(1);
		int id = e.getId();
		
		e.setName("Shivani");
		String name = e.getName();
		
		System.out.print(id + "\t" + name);
	}
}