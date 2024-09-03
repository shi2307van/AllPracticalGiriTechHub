import java.util.*;

class Student
{
	int id;
	int per;
	String name;
	
	void setId(int id)
	{
		this.id = id;
	}
	void setName(String name)
	{
		this.name = name;
	}
	void setPer(int per)
	{
		this.per = per;
	}
	int getId()
	{
		return id;
	}
	int getPer()
	{
		return per;
	}
	String getName()
	{
		return name;
	}
}

public class StudentApp
{
	public static void main(String args[])
	{
		Student s[] = new Student[3];
		Scanner sc = new Scanner(System.in);
		for(int i=0;i<s.length;i++)
		{
			s[i] = new Student();	
			
			System.out.println("Enter the id ,percentage and name of the student");
			int id = sc.nextInt();
			int per = sc.nextInt();
			sc.nextLine();
			String name = sc.next();
			
			s[i].setId(id);
			s[i].setName(name);
			s[i].setPer(per);
			
		}
		System.out.print("Enter the id of student you found");
		int sstu = sc.nextInt();
		boolean found = false;
		for(int i=0;i<s.length;i++)
		{
			if(s[i].getId() == sstu)
			{
				System.out.println("Student found");
				System.out.println("ID :-"+s[i].getId());
				System.out.println("Name :-"+s[i].getName());
				System.out.println("Percentage :-"+s[i].getPer());
				found = true;
				break;
			}
		}
		if(!found)
		{
			System.out.println("\n Student Not found");
		}
	}
}