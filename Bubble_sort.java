public class Bubble_sort{
	public static void main(String[] args)
	{
		int[] a={6,3,9,1,8,3,12,7,23,5,13,17,28,32,19,8,20,27,33,7};
		int n=20;
		for(int i=0;i<=n-2;i++)
		{
			for(int j=0;j<=(n-i-2);j++)
			{
				if(a[j]>a[j+1])
				{
					int t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
	}
}