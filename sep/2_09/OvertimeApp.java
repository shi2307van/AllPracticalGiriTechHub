import java.util.*;
class Employee
{
	int id,totalworkhr;
	double salary,overtime;
	String name;
	void setDetails(int id,int totalworkhr,double salary,String name)
	{
		this.id = id;
		this.name = name;
		this.totalworkhr = totalworkhr;
		this.salary = salary;
		this.overtime = 0;
	}
	void displayDetatils()
	{
		System.out.println("Id :-"+id+"\n Name :- "+name+"\n Total Work :- "+totalworkhr+"\n Salary :-"+salary+"\n Overtime :- "+overtime);
	}	
}
class Overtime
{
	Employee emp[];
	void setEmployee(Employee emp[])
	{
		this.emp = emp;
	}
	void calculateOvertime()
	{
		final int overtimeRate = 50;
		final int StdHr = 48;
		final int dailyWorkHr = 8;
		
		for(Employee e:emp)
		{
			if(e.totalworkhr > StdHr)
			{
				int overtimeHours = e.totalworkhr-StdHr;
				e.overtime = overtimeHours * overtimeRate;
			}
			else{
				e.overtime = 0;
			}
			e.salary = e.salary + e.overtime;
		}
	}
}

public class OvertimeApp
{
	public static void main(String args[])
	{
		Employee e[] = new Employee[5];
		Scanner sc = new Scanner(System.in);
		int id,tworkhr;
		double salary;
		String name;
		for(int i=0;i<e.length;i++){
			e[i] = new Employee();
			System.out.println("Enter id,total working hour,salary,name:- ");
			id = sc.nextInt();
			tworkhr = sc.nextInt();
			salary = sc.nextDouble();
			name = sc.nextLine();
			e[i].setDetails(id,tworkhr,salary,name);
		}
		
		Overtime ot = new Overtime();
		ot.setEmployee(e);
		ot.calculateOvertime();
		
		for(Employee emp:e)
		{
			emp.displayDetatils();
		}
	}
}