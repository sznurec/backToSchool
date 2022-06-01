#include<iostream>

using namespace std;

	long double fiboo[100000];
int main()
{
	int n;
	cout<<endl<<"number of iteration?"<<endl;
	cin>>n;
	fiboo[0]=1;
	fiboo[1]=1;
	for(int i=2;i<n;i++) 
	{
		fiboo[i]=fiboo[i-1]+fiboo[i-2];
		cout<<fiboo[i]<<endl;
	}
	

	return 0;
}
