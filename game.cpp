#include<iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>

using namespace std;

int numb,myNumb=101,trial;
int main()
{
	cout<<"numb 1 to 100\n";
	srand(time(NULL));
	numb=rand()%100+1;
	while(numb != myNumb)
	{
		trial++;
		cout<<"Your numb? ";
		cin>>myNumb;
		
		if(myNumb<numb)
		{
			cout<<"higher\n";
		}
		else if(myNumb>numb)
		{
			cout<<"lower\n";
		}
	}	
	cout<<"\nU got it";
	cout<<"\ntrial counter: "<< trial<<"\n";

return 0;
}
