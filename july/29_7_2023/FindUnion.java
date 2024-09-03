/*class Union {
    int arr[], brr[];

    void setArray(int a[], int b[]) {
        arr = a;
        brr = b;
    }

    void findUnion() {
        // Assuming max possible size for union is the total number of elements in both arrays
        int c[] = new int[arr.length + brr.length];
        int k = 0;

        // Copy elements from arr to c[]
        for (int i = 0; i < arr.length; i++) {
            boolean duplicate = false;
            for (int j = 0; j < k; j++) {
                if (c[j] == arr[i]) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                c[k++] = arr[i];
            }
        }

        // Copy elements from brr to c[], skipping duplicates
        for (int i = 0; i < brr.length; i++) {
            boolean duplicate = false;
            for (int j = 0; j < k; j++) {
                if (c[j] == brr[i]) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                c[k++] = brr[i];
            }
        }

        // Print the union elements in c[]
        System.out.println("Union of arrays:");
        for (int i = 0; i < k; i++) {
            System.out.printf("%d\t", c[i]);
        }
    }
}

public class FindUnion {
    public static void main(String args[]) {
        int a[] = new int[]{10, 20, 30, 10, 20, 30, 40};
        int b[] = new int[]{20, 60, 40, 30, 80, 70, 90};

        Union un = new Union();
        un.setArray(a, b);
        un.findUnion();
    }
}
*/

class Union
{
	int arr[],brr[];
	
	void setArray(int a[],int b[])
	{
		arr = a;
		brr = b;
	}
	
	void findUnion()
	{
		int c[] = new int[14];
		int k=0;
		for(int i=0;i<arr.length;i++)
		{
			c[k] = arr[i];
			k++;
		}
		for(int i=0;i<brr.length;i++)
		{
			c[k] = brr[i];
			k++;
		}
		for(int i=0;i<c.length;i++)
		{
			for(int j=i+1;j<c.length;j++)
			{
				if(c[i]>c[j])
				{
					int temp = c[i];
					c[i] = c[j];
					c[j] = temp;
				}
			}
		}
	
		
		int temp[] = new int[c.length];
		int t=0;
		
		for(int i=0;i<c.length-1;i++)
		{
				if(c[i]!=c[i+1])
				{
					temp[t++] = c[i];
				}
		}
		temp[t++] = c[c.length-1];
		
		/*for(int i=0;i<t;i++)
		{
			c[i] = temp[i];
		}*/
		
		for(int i=0;i<temp.length;i++)
		{
			System.out.printf("%d \t",temp[i]);
		}
	}
}

public class FindUnion
{
	public static void main(String args[])
	{
		int a[] = new int[]{10,20,30,10,20,30,40};
		int b[] = new int[]{20,60,40,30,80,70,90};
		
		Union un = new Union();
		un.setArray(a,b);
		un.findUnion();
	}
}