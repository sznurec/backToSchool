#include<iostream>

using namespace std;
int candiesCounter(int candies, int classMate)
{
	int helpCounter;	
	classMate=classMate-1;
	return (candies/classMate);
}
int x=0,y=0,z=0;
int main()
{

	while(x<2){
	cout<<"how many class member?\n";
	cin>>x;
	}
	while(y<2){
	cout<<"how many candies u have?\n";
	cin>>y;
	}
int result = candiesCounter(y,x);
x=x-1;
z=y%x;
cout<<"each classmate will get: "<<result;
cout<<" candies \n You have left: "<<z;

return 0;
}
