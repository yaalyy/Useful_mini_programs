#include <iostream>
using namespace std;
bool found=false;
int position=0,listlength=10;
int a[10]={5,2,7,8,12,54,2,7,9,3},item;

int main() {
  cin>>item;
  while((found==false)&&(position <=9))
  {
	if(item==a[position])
		found=true;
	else
		position++;
  }

if(found==true) 
	cout<<"Item found at "<<position<<endl;
else
	cout<<"Item not found in list"<<endl;


}
