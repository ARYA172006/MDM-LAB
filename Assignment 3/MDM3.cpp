#include<iostream>
using namespace std;
int fact(int a)
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
			
	int n,r,a,P,C;
	cout<<"\nEnter total number of participants:";
	cin>>n;
	cout<<"\nEnter no of people to be selected:";
	cin>>r;
	cout << "\nEnter number of participants to arrange: ";
	cin>>a;
	C=fact(n)/(fact(n-r)*fact(r));
	P=fact(r)/fact(r-a);
	int total=C*P;
	cout<<"\nNumber of possible ways to select 5 people:"<<total;
	
	return 0;
}
