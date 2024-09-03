class Voter
{
	int id;
	String name;
	int age;
	
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
	void setAge(int age)
	{
		this.age = age;
	}
	int getAge()
	{
		return age;
	}
}

class Ward
{
	int Wardid;
	String WardName;
	Voter v1[];
	void setWardid(int Wardid)
	{
		this.Wardid= Wardid;
	}
	int getWardid()
	{
		return Wardid;
	}
	void setWardName(String WardName)
	{
		this.WardName = WardName;
	}
	String getWardName()
	{
		return WardName;
	}
	
	void setVoter(Voter ...voter)
	{
		v1 = voter;
	}
	
	Voter[] getVoter()
	{
		return v1;
	}
}

class VotingMachine
{
	Ward w1[];
	void setWards(Ward ...w)
	{
		w1 = w;
	}
	void showVotingCount()
	{
		int count = 0;
		for(int i=0;i<w1.length;i++)
		{
			System.out.println("|================================================|");
			System.out.println("|WardId :- "+w1[i].getWardid()+"\t\t |" +"Ward Name :- "+w1[i].getWardName() + "|");
			System.out.println("================================================");
			
			System.out.println("|VoterId" +"\t" + "Voter Name"+" \t " + "Age|");
			System.out.println("| ----------------------------------|");
			Voter v1[];
			v1 = w1[i].getVoter();
			for(int j=0;j<v1.length;j++)
			{
				if(v1[j].getAge()>18)
				{
					System.out.println("|"+v1[j].getId() +"\t\t"+ v1[j].getName()+"\t\t"+v1[j].getAge()+"|");
				
					count++;
				}
				else{
					System.out.println("Sorry age is Less than 18!!!!");
				}
			}
		}
		System.out.println("___________________________________");
		System.out.println("Total Voting :- "+ count);
	}
}

public class VoterApplication
{
	public static void main(String args[])
	{
	
		Ward w1 = new Ward();
		w1.setWardid(1);
		w1.setWardName("Yewalewadi");
		 
		Voter v1 = new Voter();
		v1.setId(1);
		v1.setName("Shivani");
		v1.setAge(55);
		
		Voter v2 = new Voter();
		v2.setId(2);
		v2.setName("Shivam");
		v2.setAge(78);
		
		w1.setVoter(v1,v2);
		
		Ward w2 = new Ward();
		w2.setWardid(2);
		w2.setWardName("Gokul Nagar");
		
		Voter v3 = new Voter();
		v3.setId(3);
		v3.setName("Linga");
		v3.setAge(90);
		
		Voter v4 = new Voter();
		v4.setId(4);
		v4.setName("Prachi");
		v4.setAge(26);
		
		w2.setVoter(v3,v4);
	
		VotingMachine vm = new VotingMachine();
		
		vm.setWards(w1,w2);
		vm.showVotingCount();

	}
}