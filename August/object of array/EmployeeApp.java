import java.util.*;

class Employee
{
	int id;
	String name;
	int sal;
	
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
	void setSal(int sal)
	{
		this.sal = sal;
	}
	int getSal()
	{
		return sal;
	}
}
public class EmployeeApp
{
	public static void main(String args[])
	{
		Employee emp[] = new Employee[5];
		
		for(int i=0;i<emp.length;i++)
		{
			Scanner sc = new Scanner(System.in);
			emp[i] = new Employee();
			System.out.print("Enter the name,id and salary :- ");
			String name = sc.nextLine();
			int id = sc.nextInt();
			int sal = sc.nextInt();
			
			emp[i].setName(name);
			emp[i].setId(id);
			emp[i].setSal(sal);
			
		}
		System.out.print("Display all employee data \n");
		for(int i=0;i<emp.length;i++)
		{		
			System.out.print(emp[i].getId() + "\t" + emp[i].getName() + "\t" + emp[i].getSal()+"\n");
		}
	}
}
