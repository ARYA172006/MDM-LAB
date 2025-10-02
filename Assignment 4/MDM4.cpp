#include<iostream>
using namespace std;
long fact(int a)
	{
		if(a==1)
		{
			return 1;
		}
		else
		{
			return a*fact(a-1);
		}
	}
int main()
{
			
	int n,r;
    long int C;
	cout<<"\nEnter total number of participants:";
	cin>>n;
	cout<<"\nEnter no of people to be selected:";
	cin>>r;
	C= fact(n)/(fact(r)*fact(n-r));
	cout<<"\nNumber of possible ways to create team of 3:"<<C;
	
	return 0;
}
	
