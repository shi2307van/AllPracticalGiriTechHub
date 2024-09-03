class Product 
{
	int pid;
	String pname;
	int price;
	int qty;
	
	void setPid(int pid)
	{
		this.pid = pid;
	}
	
	int getPid()
	{
		return pid;
	}
	
	void setPname(String pname)
	{
		this.pname = pname;
	}
	
	String getPname()
	{
		return pname;
	}
	
	void setPrice(int price)
	{
		this.price = price;
	}
	
	int getPrice()
	{
		return price;
	}
	
	void setQty(int qty)
	{
		this.qty = qty;
	}
	
	int getQty()
	{
		return qty;
	}
}

class Customer
{
	int id;
	String name;
	String address;
	String contact;
	
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
	
	void setAdd(String address)
	{
		this.address = address;
	}
	
	String getAdd()
	{
		return address;
	}
	
	void setCon(String contact)
	{
		this.contact = contact;
	}
	
	String getCon()
	{
		return contact;
	}
}

class Shop
{ 
	Customer c1;
	Product p1[];
	void setProducts(Customer c,Product ...p)
	{
		c1 = c;
		p1 = p;
	}
	
	
	void calBill()
	{
		int total=0,tBill=0;
		System.out.println("\n*******************************************************\n");
		System.out.println("Customer Details");
		System.out.println("\n********************************************************\n");
		System.out.println("Customer Name:-"+c1.getName()+"\n"+"Id :-"+c1.getId()+"\n"+"Address :-"+c1.getAdd()+"\n" + "Contact :- "+c1.getCon());
		System.out.println("\n********************************************************\n");
		System.out.println(" Order Details");
		System.out.println("\n********************************************************\n");
		System.out.println("Pid" + "\t" +"Pname"+"\t"+"Price"+"\t"+"Qty"+"\t"+"Total");
		for(int i=0;i<p1.length;i++)
		{
			total = p1[i].getPrice() * p1[i].getQty();
			System.out.println(p1[i].getPid()+ "\t" + p1[i].getPname() + "\t" + p1[i].getPrice() +"\t"+ p1[i].getQty() +"\t"+ total);
			tBill = tBill + total;
		}
		System.out.println("--------------------------------------------------------");
		System.out.println("\t Total Bill Product : "+ tBill); 
		
	}
}
 class BillApp
 {
	 public static void main(String args[])
	 {
		Shop s1 = new Shop();
		
		Customer c1 = new Customer();
		c1.setId(1);
		c1.setName("Shivani");
		c1.setAdd("Surat");
		c1.setCon("9023844654");
		
		Product p1 = new Product();
		p1.setPid(1);
		p1.setPname("Pen");
		p1.setPrice(800);
		p1.setQty(5);
		
		Product p2 = new Product();
		p2.setPid(2);
		p2.setPname("Pencil");
		p2.setPrice(300);
		p2.setQty(15);
		
		Product p3 = new Product();
		p3.setPid(3);
		p3.setPname("Mobile");
		p3.setPrice(12000);
		p3.setQty(1);
		
		Product p4 = new Product();
		p4.setPid(4);
		p4.setPname("Mouse");
		p4.setPrice(1000);
		p4.setQty(3);
		
		s1.setProducts(c1,p1,p2,p3,p4);
		s1.calBill();
	 }
 }
 