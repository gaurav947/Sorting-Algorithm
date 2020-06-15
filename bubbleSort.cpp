#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int n;
	cout<<"Enter the Size of Array = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int flag = 0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	cout<<"\nBubble Sort = ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
