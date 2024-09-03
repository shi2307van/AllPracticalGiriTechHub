public class Test5
{
	public static void main(String args[])
	{ 
		int i,j;
		
		for(i=1;i<=5;i++)
		{   
		int t=5,y=2;
			for(j=1;j<=9;j++)
			{
				
				if(j<=5){
					if(j>=6-i && j<=4+i)
					{
						System.out.printf("%d",t);
						
					}
					else{
						System.out.print(" ");
					}
					t--;
				}
				if(j>5)
				{
					
					if(j>=6-i && j<=4+i)
					{
						System.out.printf("%d",y++);
					}
					else{
						System.out.print(" ");
					}
					
				}
				
			}

			System.out.println();
		}
		
		
		
		/*for(int i=1;i<=5;i++)
		{
			for(int j=5-i;j>0;j--)
			{
				System.out.print(" ");
			}
			
			for(int j=i;j>0;j--)
			{
				System.out.print(j);
			}
			
			for(int j=2;j<=i;j++)
			{
				System.out.print(j);
			}
			System.out.println();
		}*/
		
	}
}
