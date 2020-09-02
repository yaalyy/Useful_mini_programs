#include<iostream>
using namespace std;
double account=0;
int main()
{
    cout<<"This is a accumulator to calculate the sum"<<endl;
    cout<<"When you finish the accumulation, input 6666: "<<endl;
    double a=0;
    while(a!=6666)
    {
        cin>>a;
        account+=a;
    }
    account-=6666;
    cout<<"The account is "<<account<<endl;
    return 0;
}
