class Employee
{
	private int id;
	private String name;
	private int sal;
	
	public void setId(int id){
		this.id = id;
	}
	
	public int getId(){
		return id;
	}
	
	public void setName(String name){
		this.name = name;
	}
	
	public String getName(){
		return name;
	}
	
	public void setSal(int sal){
		this.sal = sal;
	}
	
	public int getSal(){
		return sal;
	}
}

class Company
{
	private Employee emp;
	
	void addNewEmp(Employee employee)
	{
		emp = employee;
	}
	
	void showEmployee()
	{
		System.out.println(emp.getId() + "\t" + emp.getName() + "\t" + emp.getSal());
	}
}

public class CompanyApp
{
	public static void main(String args[])
	{
		Company c = new Company();
		Employee e = new Employee();
		
		

		e.setId(1);
		e.setName("Shivani");
		e.setSal(10000);
		
		c.addNewEmp(e);
		c.showEmployee();
	}
}