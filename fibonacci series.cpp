//do you know about fibonacci series ?the following series 1,1,2,3,5,8....?
#include<iostream>
using namespace std;
int main()
{
	int n,x1=0,x2=1,nextterm =0;
	cout<<"enter the number of terms :";
	cin>>n;
	cout<<"fibonacci series : ";
	for (int i=1;i<=n;i++)
	{
		if (i==1)
		{
			cout<<x1<<",";
			continue;
		}
		if(i==2)
		{
			cout<<x2<<",";
		}
		nextterm =x1+x2;
		x1=x2;
		x2=nextterm;
		cout<<nextterm <<",";		
	}
	return 0;
}
