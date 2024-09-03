int main(){
		
			int a[]={1,2,3,4,5};
			int b[]={3,4,5,6,7};
			
			UnionApp ua;
			ua.setArray(a,b);// array pass i.e a[],b[]
			ua.performIntersection();
	
	return  0;
}
class UnionApp{
	
		int *a,*b;
	
		public:
		void setArray(int arr1[],int arr2[])
		{
			a=arr1;
			b=arr2;
		}	
		void performIntersection(){
			
			int len1 = sizeof(a)/sizeof(int);// 20/4= len1= 5
			int len2 = sizeof(b)/sizeof(int);// 20/4= len1= 5
			// 1,2,3,4,5,6,7 -------> Union Array
			// 3,4,5 --------> Intersection Array
			int len3 =  len1+len2;// (5+5)=10 len3=10
			int c[len3];
			int index=0;
			for(int i=0;i<len1;i++)
			{
				c[index++]=a[i];//c[1,2,3,4,5,0,0,0,0,0]
			}
			for
for(int i=0;i<len2;i++)
			{
				c[index++]=b[i];//c[1,2,3,4,5,3,4,5,6,7]  
				//after duplicate remove --> 1,2,3,4,5,6,7
			}

