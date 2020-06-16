#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j,n,key;
	cout<<"Enter size of array = ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key;
	}
	cout<<"\nInsertion Sort = ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
