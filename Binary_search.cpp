#include<iostream>
using namespace std;
int listitem[10]={1,2,3,4,5,6,7,8,9,10};
int lowerbound = 0;
int upperbound = 10-1;
bool found = false;
int item;
int midpoint;
int main()
{
  cin>>item;

  while((found == false)&&(lowerbound <= upperbound))
  {
	  midpoint=lowerbound+(upperbound - lowerbound)/2;
	  if (listitem[midpoint] == item)
		  found = true;
	  else if (listitem[midpoint] < item) 
		  lowerbound = midpoint + 1;
	  else
		  upperbound = midpoint-1;
  
  }
  if (found == true)  
  cout<<"Item found at "<<midpoint<<endl;
}
