int hcf(int m,int n)
{
	int r=m%n;
	while(r)
	{
		m=n;n=r;r=m%n;
	}
	return n;
}
