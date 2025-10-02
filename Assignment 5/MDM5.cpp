/* Floyd-Warshall algorithm:
Write a program for a city planner which needs to design a traffic system
that minimizes the travel time between various intersections. Each road has a
different travel time, and the planner wants to ensure that the shortest routes
between all intersections are identified.
*/
#include<iostream>
#include<vector>
using namespace std;
//Warshall
void warshall(vector<vector<int>> &a, int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][k]+a[k][j]<a[i][j])
				{
					a[i][j]=a[i][k]+a[k][j];
	
				}
			}
		}
	}
}
int main()
{
	int i,j;
	int m=4,n=4;
	vector<vector<int>> a(m,vector<int>(n));
	cout<<"\n Enter Matrix";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"\n Original Matrix is \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}

	
  warshall(a,n);	
  cout<<"\n Shortest path is \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}

return 0;
}
	