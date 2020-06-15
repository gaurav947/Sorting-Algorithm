#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[10];
	cout<<"Enter the size of array = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int min = a[i];
		int loc =i;
		for(int j = i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min = a[j];
				loc = j;
			}
		}
		if(i!=loc)
		{
			int temp  = a[i];
			cout<<"temp = "<<temp<<endl;
			a[i] = a[loc];
			cout<<"a[i] = "<<a[i]<<" ";
			a[loc] = temp;
		}
	}
	cout<<"\nSelection Sort = ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
