int hcf(int m,int n)
{
    int r=m%n;
    while(r)
    {
        m=n;n=r;r=m%n;
    }
    return n;
}

int LCM(int a,int b)
{
int temp_lcm;
temp_lcm=a*b/hcf(a,b);//最小公倍数等于两数之积除以最大公约数
return temp_lcm;
}
