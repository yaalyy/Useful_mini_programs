#include <iostream>
using namespace std;
int a[10]={6,3,9,1,8,3,12,7,23,5};   //unsorted array
int length=10;
int main()
{
    int nextitem;
    for(int j=1;j<=length-1;j++)
    {
      nextitem=a[j];
      int i=j-1;
      while((i>=0)&&(a[i]>nextitem))
      {
        a[i+1]=a[i];            //Push front elements back
        i--;
      }
      a[i+1]=nextitem;
    }
    for(int i=0;i<length;i++)
    {
      cout<<a[i]<<" ";     //output the sorted array
    }
}
